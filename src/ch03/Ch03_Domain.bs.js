// Generated by BUCKLESCRIPT VERSION 4.0.18, PLEASE EDIT WITH CARE
'use strict';


function make(id, name) {
  return /* record */[
          /* id */id,
          /* name */name
        ];
}

var Person = /* module */[/* make */make];

function make$1(id, name, employees) {
  return /* record */[
          /* id */id,
          /* name */name,
          /* employees */employees
        ];
}

var Company = /* module */[/* make */make$1];

var p = /* record */[
  /* id */99,
  /* name */"oldster"
];

var co_002 = /* employees : :: */[
  p,
  /* [] */0
];

var co = /* record */[
  /* id */1,
  /* name */"1st corp",
  co_002
];

var p2 = /* record */[
  /* id */42,
  /* name */"Lin"
];

var co2_002 = /* employees : :: */[
  p,
  /* :: */[
    p2,
    /* [] */0
  ]
];

var co2 = /* record */[
  /* id */2,
  /* name */"2nd corp",
  co2_002
];

exports.Person = Person;
exports.Company = Company;
exports.p = p;
exports.co = co;
exports.p2 = p2;
exports.co2 = co2;
/* No side effect */
