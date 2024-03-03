# LookML tree-sitter parser

Work in progress, tree sitter uses a simple grammar to build a GLR parser that can produce ASTs.

See `grammar.js` for the parser logic.

View file input:
```lookml
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
}
```

Parser output:
```
(source_file [0, 0] - [15, 0]
  (view [0, 0] - [14, 1]
    (identifier [0, 6] - [0, 12])
    (dimension [1, 2] - [5, 3]
      (identifier [1, 13] - [1, 15])
      (primary_key [2, 4] - [2, 20]
        (identifier [2, 17] - [2, 20]))
      (type [3, 4] - [3, 16]
        (identifier [3, 10] - [3, 16]))
      (sql [4, 4] - [4, 23]
        (expression [4, 8] - [4, 21])))
    (dimension [6, 2] - [8, 3]
      (identifier [6, 13] - [6, 24])
      (comment [6, 32] - [6, 59])
      (sql [7, 4] - [7, 32]
        (expression [7, 8] - [7, 30])))
    (dimension [9, 2] - [13, 3]
      (identifier [9, 13] - [9, 19])
      (comment [9, 32] - [9, 54])
      (type [10, 4] - [10, 16]
        (identifier [10, 10] - [10, 16]))
      (value_format [11, 4] - [11, 24]
        (string [11, 18] - [11, 24]))
      (sql [12, 4] - [12, 27]
        (expression [12, 8] - [12, 25])))))
```
