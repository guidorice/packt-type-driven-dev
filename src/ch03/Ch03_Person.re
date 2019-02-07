module Name = {
  type t = string;
  let make = string => String.(capitalize(trim(string)));
  let toString = t => t;
};
type id = int;
type t = {
  id,
  name: Name.t,
};

let id = t => t.id;
let name = t => t.name;
let make = (id, name) => {id, name};