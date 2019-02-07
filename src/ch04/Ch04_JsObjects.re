let bob = {"id": 1, "name": "Bob"};

let greet = person =>
  "Hello, " ++ person##name ++ " with id " ++ string_of_int(person##id);

let jim = {"id": 2, "name": "Jimbo", "age": 29};
Js.log(greet(jim));

let moreLiteral = {"id": 42, "things": ["x", "y", "z"]};
Js.log(moreLiteral);