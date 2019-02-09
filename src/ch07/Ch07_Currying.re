let printEnvelopeLabel =
    (
      ~firstname: string,
      ~lastname: string,
      ~address: string,
      ~country: string,
    ) => {
  print_newline();
  print_endline(firstname ++ " " ++ lastname);
  print_endline(address);
  print_endline(country);
};

printEnvelopeLabel("John", "Doe", "some address in the US", "USA");
let printUS = printEnvelopeLabel(~country="USA");
printUS("John", "Doe", "some address in the US");

let printDoeFamily =
  printUS(~lastname="Doe", ~address="some address in the US");
printDoeFamily(~firstname="Jane");