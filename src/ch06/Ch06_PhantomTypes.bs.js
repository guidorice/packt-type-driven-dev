// Generated by BUCKLESCRIPT VERSION 4.0.18, PLEASE EDIT WITH CARE
'use strict';

var $$String = require("bs-platform/lib/js/string.js");

function select(columns) {
  var commalist = $$String.concat(", ", columns);
  return "select " + (String(commalist) + "");
}

function from(table, t) {
  return "" + (String(t) + (" from " + (String(table) + "")));
}

function print(t) {
  return t;
}

var Sql = /* module */[
  /* select */select,
  /* from */from,
  /* print */print
];

var sql = from("employees", select(/* :: */[
          "name",
          /* [] */0
        ]));

console.log(sql);

exports.Sql = Sql;
exports.sql = sql;
/* sql Not a pure module */
