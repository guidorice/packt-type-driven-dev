let greetAgain(person) = 
  "hello, again " ++ person.Ch03_Domain.Person.name ++
  " with id " ++
  string_of_int(person.id) ++
  "!";

let p : Ch03_Domain.Person.t = {id: 42, name: "Alex"}
let msg = greetAgain(p);
Js.log(msg);

let p2 = Ch03_Domain.Person.make(34, "Alejandro");
let msg = greetAgain(p2);
Js.log(msg);

let p3 : Ch03_Domain.Person.t = {id: 123, name: "Dude"};
Js.log(p3);