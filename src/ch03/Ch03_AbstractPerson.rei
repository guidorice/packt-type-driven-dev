type id = int;
type name = string;
type t;

let make: (id, name) => t;
let id: t => id;
let name: t => name;
