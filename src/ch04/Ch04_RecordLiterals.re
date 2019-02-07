type person = {
  id: int,
  name: string,
};

let bob = {name: "Bob", id: 1};

let jim = {
  let id = 2;
  let name = "Jim";
  {id, name};
};

let tom = {id: 42, name: "Thomas"};