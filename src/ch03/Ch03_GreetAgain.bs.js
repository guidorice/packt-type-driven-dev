// Generated by BUCKLESCRIPT VERSION 4.0.18, PLEASE EDIT WITH CARE
'use strict';

var Ch03_Domain$PacktTypeDrivenDev = require("./Ch03_Domain.bs.js");

function greetAgain(person) {
  return "hello, again " + (person[/* name */1] + (" with id " + (String(person[/* id */0]) + "!")));
}

var msg = greetAgain(/* record */[
      /* id */42,
      /* name */"Alex"
    ]);

console.log(msg);

var p2 = Ch03_Domain$PacktTypeDrivenDev.Person[/* make */0](34, "Alejandro");

var msg$1 = greetAgain(p2);

console.log(msg$1);

console.log(/* record */[
      /* id */123,
      /* name */"Dude"
    ]);

exports.greetAgain = greetAgain;
exports.msg = msg$1;
exports.p2 = p2;
/* msg Not a pure module */
