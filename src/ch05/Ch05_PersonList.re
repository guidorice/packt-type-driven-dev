type t =
  | Node(Ch05_CrmPerson.t, t)
  | Empty;

let people = Ch05_CrmPerson.(Node(bob, Node(jim, Empty)));
let rec greet = t =>
  switch (t) {
  | Node(person, list) =>
    print_endline("Hello, " ++ person.name ++ "!");
    greet(list);
  | Empty => ()
  };