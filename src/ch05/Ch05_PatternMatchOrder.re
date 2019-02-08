type person =
  Ch04_RecordLiterals.person = {
    id: int,
    name: string,
  }; // or just open Ch04_RecordLiterals!

let classifyId = id =>
  switch (id) {
  | 1
  | 2
  | 3
  | 4
  | 5 => "Low"
  | 6
  | 7
  | 8
  | 9
  | 10 => "Med"
  | _ => "Hi"
  };

let greet1 = person =>
  switch (person.id, person.name) {
  | (_, "Dave") => "I'm sorry, Dave, I can't let you do that."
  | (1, _) => "Hello boss!"
  | (id, name) => "Hi, " ++ name ++ " with id: " ++ string_of_int(id)
  };

let greet2 = person =>
  switch (person) {
  | {name: "Dave"} => "I'm sorry, Dave, I can't let you do that."
  | {id: 1} => "Hello boss!"
  | {id, name} => "Hi, " ++ name ++ " with id: " ++ string_of_int(id)
  };