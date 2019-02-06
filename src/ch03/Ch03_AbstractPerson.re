type id = int;
type name = string;
type t = {id, name};

let id(t) = t.id;
let name(t) = t.name;
let massage(name) = String.trim(String.capitalize(name));
let make(id, name) = {id, name: massage(name)};
