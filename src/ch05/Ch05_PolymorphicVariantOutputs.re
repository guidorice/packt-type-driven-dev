/** output variant has lower bound [> */
let stringToColor = string =>
  switch (string) {
  | "red" => `red
  | "green" => `green
  | "blue" => `blue
  | _ => `unknown
  };