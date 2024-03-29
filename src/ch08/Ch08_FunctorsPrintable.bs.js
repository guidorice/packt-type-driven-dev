// Generated by BUCKLESCRIPT VERSION 4.0.18, PLEASE EDIT WITH CARE
'use strict';

var Curry = require("bs-platform/lib/js/curry.js");

function Make(First) {
  return (function (Second) {
      var make = function (f, s) {
        return /* tuple */[
                f,
                s
              ];
      };
      var print = function (param) {
        return "(" + (Curry._1(First[/* print */0], param[0]) + (", " + (Curry._1(Second[/* print */0], param[1]) + ")")));
      };
      return /* module */[
              /* make */make,
              /* print */print
            ];
    });
}

function print(s) {
  return s;
}

var PrintableString = /* module */[/* print */print];

function print$1(i) {
  return String(i);
}

var PrintableInt = /* module */[/* print */print$1];

function make(f, s) {
  return /* tuple */[
          f,
          s
        ];
}

function print$2(param) {
  return "(" + (param[0] + (", " + (String(param[1]) + ")")));
}

var PrintableSI = /* module */[
  /* make */make,
  /* print */print$2
];

var pair = make("Jane", 53);

var str = print$2(pair);

console.log(str);

exports.Make = Make;
exports.PrintableString = PrintableString;
exports.PrintableInt = PrintableInt;
exports.PrintableSI = PrintableSI;
/* pair Not a pure module */
