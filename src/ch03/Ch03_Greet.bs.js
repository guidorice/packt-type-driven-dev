// Generated by BUCKLESCRIPT VERSION 4.0.18, PLEASE EDIT WITH CARE
'use strict';


function greet(person) {
  return "Hello, " + (person[/* name */1] + (" with id " + (String(person[/* id */0]) + "!")));
}

var p = /* record */[
  /* id */42,
  /* name */"Alex"
];

var msg = greet(p);

console.log(msg);

exports.greet = greet;
exports.p = p;
exports.msg = msg;
/* msg Not a pure module */
