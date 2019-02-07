type id = int;
type name = string;
type t;

let id: t => id;
let make: (id, name) => t;
let name: t => name;