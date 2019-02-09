// Generated by BUCKLESCRIPT VERSION 4.0.18, PLEASE EDIT WITH CARE
'use strict';

var Curry = require("bs-platform/lib/js/curry.js");
var Caml_option = require("bs-platform/lib/js/caml_option.js");
var Ch06_List$PacktTypeDrivenDev = require("./Ch06_List.bs.js");
var Ch06_ReasonList$PacktTypeDrivenDev = require("./Ch06_ReasonList.bs.js");

function tryFind(needle, _haystack) {
  while(true) {
    var haystack = _haystack;
    if (haystack) {
      var item = haystack[0];
      if (Curry._1(needle, item)) {
        return Caml_option.some(item);
      } else {
        _haystack = haystack[1];
        continue ;
      }
    } else {
      return undefined;
    }
  };
}

function optionallyGreet(person) {
  if (person !== undefined) {
    return Ch06_List$PacktTypeDrivenDev.greetOne(person);
  } else {
    console.log("no such person!");
    return /* () */0;
  }
}

function idEq1(param) {
  return param[/* id */0] === 1;
}

function idEq4(param) {
  return param[/* id */0] === 4;
}

optionallyGreet(tryFind(idEq1, Ch06_ReasonList$PacktTypeDrivenDev.people));

optionallyGreet(tryFind(idEq4, Ch06_ReasonList$PacktTypeDrivenDev.people));

exports.tryFind = tryFind;
exports.optionallyGreet = optionallyGreet;
exports.idEq1 = idEq1;
exports.idEq4 = idEq4;
/*  Not a pure module */