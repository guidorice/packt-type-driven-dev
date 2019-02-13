type color = [ | `Red | `Orange | `Yellow | `Green | `Blue];
type rgb = [ | `Red | `Green | `Blue];

let oneGreen: color = `Green;
let otherGreen: rgb = `Green;

Js.log(oneGreen);
Js.log(otherGreen);

let stringOfColor = (c: color): string => {
  switch (c) {
  | `Red => "red"
  | `Orange => "orange"
  | `Yellow => "yellow"
  | `Green => "green"
  | `Blue => "blue"
  };
};

let stringOfRgb = (c: rgb): string => {
  switch (c) {
  | `Red => "RGB red"
  | `Green => "RGB green"
  | `Blue => "RGB blue"
  };
};

Js.log(stringOfColor(oneGreen));
Js.log(stringOfRgb(otherGreen));

/* typeerror */
/* Js.log(stringOfRgb(oneGreen)); */