let rec tryFind = (needle, haystack) =>
  switch (haystack) {
  | [item, ..._items] when needle(item) => Some(item)
  | [_item, ...items] => tryFind(needle, items)
  | [] => None
  };

let optionallyGreet = person =>
  switch (person) {
  | Some(person) => Ch06_List.greetOne(person)
  | None => print_endline("no such person!")
  };

let idEq1 = ({Ch04_RecordLiterals.id}) => id == 1;
let idEq4 = ({Ch04_RecordLiterals.id}) => id === 4;

optionallyGreet(tryFind(idEq1, Ch06_ReasonList.people));
optionallyGreet(tryFind(idEq4, Ch06_ReasonList.people));