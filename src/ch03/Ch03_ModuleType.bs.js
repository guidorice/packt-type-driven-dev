// Generated by BUCKLESCRIPT VERSION 4.0.18, PLEASE EDIT WITH CARE

import * as $$String from "bs-platform/lib/es6/string.js";

function make(id, name) {
  return /* record */[
          /* id */id,
          /* name */$$String.trim($$String.capitalize(name))
        ];
}

function fnord(param) {
  return "hi";
}

var Person = /* module */[
  /* make */make,
  /* fnord */fnord
];

export {
  Person ,
  
}
/* No side effect */