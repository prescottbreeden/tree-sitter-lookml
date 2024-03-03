# LookML tree-sitter parser

Work in progress, tree sitter uses a simple grammar to build a GLR parser that can produce ASTs.

See `grammar.js` for the parser logic.

## Sample LookML syntax
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

## Samples
The example below is from google cloud docs.

View file input: `./examples/sample_docs_file.lkml`

Parser output:
```scm
(source_file [0, 0] - [76, 0]
  (comment [0, 0] - [0, 38])
  (comment [1, 0] - [1, 38])
  (comment [2, 0] - [2, 38])
  (comment [3, 0] - [3, 38])
  (connection_property [4, 0] - [4, 26]
    (identifier [4, 12] - [4, 26]))
  (include_property [5, 0] - [5, 22]
    (string [5, 9] - [5, 22]))
  (explore [6, 0] - [10, 1]
    (identifier [6, 9] - [6, 15])
    (join [7, 2] - [9, 3]
      (identifier [7, 8] - [7, 17])
      (sql_on [8, 4] - [8, 54]
        (expression [8, 11] - [8, 52]))))
  (comment [12, 0] - [12, 58])
  (comment [13, 0] - [13, 58])
  (comment [14, 0] - [14, 58])
  (comment [15, 0] - [15, 58])
  (view [16, 0] - [46, 1]
    (identifier [16, 6] - [16, 12])
    (dimension [17, 2] - [21, 3]
      (identifier [17, 13] - [17, 15])
      (primary_key [18, 4] - [18, 20]
        (identifier [18, 17] - [18, 20]))
      (type [19, 4] - [19, 16]
        (identifier [19, 10] - [19, 16]))
      (sql [20, 4] - [20, 23]
        (expression [20, 8] - [20, 21])))
    (dimension [22, 2] - [24, 3]
      (identifier [22, 13] - [22, 24])
      (comment [22, 32] - [22, 59])
      (sql [23, 4] - [23, 32]
        (expression [23, 8] - [23, 30])))
    (dimension [25, 2] - [29, 3]
      (identifier [25, 13] - [25, 19])
      (comment [25, 32] - [25, 54])
      (type [26, 4] - [26, 16]
        (identifier [26, 10] - [26, 16]))
      (value_format [27, 4] - [27, 24]
        (string [27, 18] - [27, 24]))
      (sql [28, 4] - [28, 27]
        (expression [28, 8] - [28, 25])))
    (dimension_group [30, 2] - [34, 3]
      (identifier [30, 19] - [30, 26])
      (comment [30, 44] - [30, 63])
      (type [31, 4] - [31, 14]
        (identifier [31, 10] - [31, 14]))
      (comment [31, 44] - [31, 86])
      (timeframes [32, 4] - [32, 41]
        (identifier [32, 17] - [32, 21])
        (identifier [32, 23] - [32, 27])
        (identifier [32, 29] - [32, 33])
        (identifier [32, 35] - [32, 40]))
      (comment [32, 44] - [32, 87])
      (sql [33, 4] - [33, 31]
        (expression [33, 8] - [33, 29])))
    (measure [35, 2] - [38, 3]
      (identifier [35, 11] - [35, 16])
      (comment [35, 31] - [35, 52])
      (type [36, 4] - [36, 15]
        (identifier [36, 10] - [36, 15]))
      (comment [36, 31] - [36, 55])
      (drill_fields [37, 4] - [37, 30]
        (identifier_with_asterisk [37, 19] - [37, 29]
          (identifier [37, 19] - [37, 28])))
      (comment [37, 31] - [37, 90]))
    (measure [39, 2] - [42, 3]
      (identifier [39, 11] - [39, 23])
      (type [40, 4] - [40, 13]
        (identifier [40, 10] - [40, 13]))
      (sql [41, 4] - [41, 21]
        (expression [41, 8] - [41, 19])))
    (set [43, 2] - [45, 3]
      (identifier [43, 7] - [43, 16])
      (fields [44, 4] - [44, 54]
        (field_identifier [44, 13] - [44, 15]
          (identifier [44, 13] - [44, 15]))
        (field_identifier [44, 17] - [44, 29]
          (identifier [44, 17] - [44, 29]))
        (field_identifier [44, 31] - [44, 45]
          (dot_walked_identifier [44, 31] - [44, 45]
            (identifier [44, 31] - [44, 40])
            (identifier [44, 41] - [44, 45])))
        (field_identifier [44, 47] - [44, 53]
          (identifier [44, 47] - [44, 53])))))
  (comment [48, 0] - [48, 61])
  (comment [49, 0] - [49, 61])
  (comment [50, 0] - [50, 61])
  (comment [51, 0] - [51, 61])
  (view [52, 0] - [74, 1]
    (identifier [52, 6] - [52, 15])
    (dimension [53, 2] - [57, 3]
      (identifier [53, 13] - [53, 15])
      (primary_key [54, 4] - [54, 20]
        (identifier [54, 17] - [54, 20]))
      (type [55, 4] - [55, 16]
        (identifier [55, 10] - [55, 16]))
      (sql [56, 4] - [56, 23]
        (expression [56, 8] - [56, 21])))
    (dimension [58, 2] - [60, 3]
      (identifier [58, 13] - [58, 17])
      (comment [58, 39] - [58, 62])
      (sql [59, 4] - [59, 25]
        (expression [59, 8] - [59, 23])))
    (dimension [61, 2] - [63, 3]
      (identifier [61, 13] - [61, 18])
      (comment [61, 39] - [61, 63])
      (sql [62, 4] - [62, 26]
        (expression [62, 8] - [62, 24])))
    (dimension [64, 2] - [66, 3]
      (identifier [64, 13] - [64, 17])
      (sql [65, 4] - [65, 62]
        (expression [65, 8] - [65, 60])))
    (measure [67, 2] - [70, 3]
      (identifier [67, 11] - [67, 16])
      (comment [67, 31] - [67, 55])
      (type [68, 4] - [68, 15]
        (identifier [68, 10] - [68, 15]))
      (comment [68, 31] - [68, 55])
      (drill_fields [69, 4] - [69, 30]
        (identifier_with_asterisk [69, 19] - [69, 29]
          (identifier [69, 19] - [69, 28])))
      (comment [69, 31] - [69, 85]))
    (set [71, 2] - [73, 3]
      (identifier [71, 7] - [71, 16])
      (comment [71, 39] - [71, 65])
      (fields [72, 4] - [72, 37]
        (field_identifier [72, 13] - [72, 15]
          (identifier [72, 13] - [72, 15]))
        (field_identifier [72, 17] - [72, 22]
          (identifier [72, 17] - [72, 22]))
        (field_identifier [72, 24] - [72, 36]
          (dot_walked_identifier [72, 24] - [72, 36]
            (identifier [72, 24] - [72, 30])
            (identifier [72, 31] - [72, 36]))))
      (comment [72, 39] - [72, 101]))))
```
