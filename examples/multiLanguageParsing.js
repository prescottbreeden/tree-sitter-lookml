const Parser = require('tree-sitter');
const LookML = require('../build/Release/tree_sitter_lookml_binding.node');

async function findSqlExpressions(sourceCode) {
  const parser = new Parser();
  parser.setLanguage(LookML);
  const tree = parser.parse(sourceCode);
  const query = new Parser.Query(LookML, `(measure)`); // returns 2 matches
  const matches = query.matches(tree.rootNode);
  return matches;
}

// Example source code to parse
const sourceCode = `
view: orders {
  dimension: id {
    primary_key: yes
    type: number
    sql: {TABLE}.id ;;
  }
  dimension: customer_id {      # field: orders.customer_id
    sql: {TABLE}.customer_id ;;
  }
  dimension: amount {           # field: orders.amount
    type: number
    value_format: "0.00"
    sql: {TABLE}.amount ;;
  }
  dimension_group: created {                # generates fields:
    type: time                              # orders.created_time, orders.created_date
    timeframes: [time, date, week, month]   # orders.created_week, orders.created_month
    sql: {TABLE}.created_at ;;
  }
  measure: count {             # field: orders.count
    type: count                # creates a sql COUNT(*)
    drill_fields: [drill_set*] # list of fields to show when someone clicks 'ORDERS Count'
  }
  measure: total_amount {
    type: sum
    sql: {amount} ;;
  }
  set: drill_set {
    fields: [id, created_time, customers.name, amount]
  }
}
`;

// seems to pull the number of relevant nodes into the matches array but currently
// coming back with empty data
findSqlExpressions(sourceCode).catch(console.error);

