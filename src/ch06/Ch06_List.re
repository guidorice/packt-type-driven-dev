type list('a) =
  | Cons('a, list('a))
  | Empty;

let people = Ch04_RecordLiterals.(Cons(bob, Cons(jim, Cons(tom, Empty))));

let greetOne = ({Ch04_RecordLiterals.id, name}) =>
  print_endline({j|Hello, $name with id $id|j});

let rec greetAll = people =>
  switch (people) {
  | Cons(person, people) =>
    greetOne(person);
    greetAll(people);
  | Empty => ()
  };