module Person = {
  type t = {id: int, name: string};
  let make(id, name) = {id, name};
};

module Company {
  type t = {id: int, name: string, employees: list(Person.t)};
  let make(id, name, employees) = {id, name, employees};
};

let p : Person.t = {id: 99, name: "oldster"};
let co : Company.t = {id: 1, name: "1st corp", employees: [p]};

let p2 = Person.make(42, "Lin");
let co2 = Company.make(2, "2nd corp", [p, p2]);
