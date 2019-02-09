// Generated by BUCKLESCRIPT VERSION 4.0.18, PLEASE EDIT WITH CARE
'use strict';

var Curry = require("bs-platform/lib/js/curry.js");
var Pervasives = require("bs-platform/lib/js/pervasives.js");

function printEnvelopeLabel(firstname, lastname, address, country) {
  Pervasives.print_newline(/* () */0);
  console.log(firstname + (" " + lastname));
  console.log(address);
  console.log(country);
  return /* () */0;
}

printEnvelopeLabel("John", "Doe", "some address in the US", "USA");

function printUS(param) {
  return (function (param$1) {
      return (function (param$2) {
          var param$3 = param$2;
          var param$4 = "USA";
          var param$5 = param$1;
          var param$6 = param$3;
          var param$7 = param$4;
          return printEnvelopeLabel(param, param$5, param$6, param$7);
        });
    });
}

Curry._1(printUS("John")("Doe"), "some address in the US");

function printDoeFamily(param) {
  return Curry._1(printUS(param)("Doe"), "some address in the US");
}

Curry._1(printUS("Jane")("Doe"), "some address in the US");

exports.printEnvelopeLabel = printEnvelopeLabel;
exports.printUS = printUS;
exports.printDoeFamily = printDoeFamily;
/*  Not a pure module */