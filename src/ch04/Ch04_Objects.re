let bob = {as _; pub id = 1; pub name = "Bob"};

let greet = person =>
  "Hello, " ++ person#name ++ " with id " ++ string_of_int(person#id);

let jim = {
  pub id = 2;
  pub name = "Jim";
  pub sayHi = "Hi, my name is " ++ this#name
};

Js.log(greet(jim));