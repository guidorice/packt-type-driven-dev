let people = Ch04_RecordLiterals.[bob, jim, tom];

let rec greetAll = people =>
  switch (people) {
  | [person, ...people] =>
    Ch06_List.greetOne(person);
    greetAll(people);
  | [] => ()
  };