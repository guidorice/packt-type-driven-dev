let greet (person: Ch02_Demo.person) = 
"Hello, " ++ person.name ++ 
" with id " ++ string_of_int(person.id) ++
"!"

let p : Ch02_Demo.person = {id: 42, name: "Alex"};
let msg = greet(p);
Js.log(msg);
