######################################
# FILE: ecommercestore.model.lkml    #
# Define the explores and join logic #
######################################
connection: order_database
include: "*.view.lkml"
explore: orders {
  join: customers {
    sql_on: ${orders.customer_id} = ${customers.id} ;;
  }
}

##########################################################
# FILE: orders.view.lkml                                 #
# Define the dimensions and measures for the ORDERS view #
##########################################################
view: orders {
  dimension: id {
    primary_key: yes
    type: number
    sql: ${TABLE}.id ;;
  }
  dimension: customer_id {      # field: orders.customer_id
    sql: ${TABLE}.customer_id ;;
  }
  dimension: amount {           # field: orders.amount
    type: number
    value_format: "0.00"
    sql: ${TABLE}.amount ;;
  }
  dimension_group: created {                # generates fields:
    type: time                              # orders.created_time, orders.created_date
    timeframes: [time, date, week, month]   # orders.created_week, orders.created_month
    sql: ${TABLE}.created_at ;;
  }
  measure: count {             # field: orders.count
    type: count                # creates a sql COUNT(*)
    drill_fields: [drill_set*] # list of fields to show when someone clicks 'ORDERS Count'
  }
  measure: total_amount {
    type: sum
    sql: ${amount} ;;
  }
  set: drill_set {
    fields: [id, created_time, customers.name, amount]
  }
}

#############################################################
# FILE: customers.view.lkml                                 #
# Define the dimensions and measures for the CUSTOMERS view #
#############################################################
view: customers {
  dimension: id {
    primary_key: yes
    type: number
    sql: ${TABLE}.id ;;
  }
  dimension: city {                    # field: customers.city
    sql: ${TABLE}.city ;;
  }
  dimension: state {                   # field: customers.state
    sql: ${TABLE}.state ;;
  }
  dimension: name {
    sql: CONCAT(${TABLE}.firstname, " ", ${TABLE}.lastname) ;;
  }
  measure: count {             # field: customers.count
    type: count                # creates a sql COUNT(*)
    drill_fields: [drill_set*] # fields to show when someone clicks 'CUSTOMERS Count'
  }
  set: drill_set {                     # set: customers.drill_set
    fields: [id, state, orders.count]  # list of fields to show when someone clicks 'CUSTOMERS Count'
  }
}

