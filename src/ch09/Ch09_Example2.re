type onlyWomanShoe = [ | `Slingbacks | `Highheels];
type shoe = [ onlyWomanShoe | `Moccasins | `Boots | `Sneakers | `Wingtips];

let johnDoeShoe: shoe = `Moccasins;
let janeDoeShoe: shoe = `Slingbacks;

let infoAboutShoe = (s: shoe): string => {
  switch (s) {
  | `Slingbacks => "slingbacks (w)"
  | `Highheels => "high heels (w)"
  | `Moccasins => "mocs"
  | `Boots => "boots"
  | `Sneakers => "sneaks"
  | `Wingtips => "wingtips"
  };
};

Js.log(infoAboutShoe(johnDoeShoe));
Js.log(infoAboutShoe(janeDoeShoe));

let infoAboutShoe2 = (s: shoe): string => {
  switch (s) {
  | #onlyWomanShoe => "Woman shoe such as Sandals or High Heels"
  | `Moccasins => "Moccasins"
  | `Boots => "Boots"
  | `Sneakers => "Sneakers"
  | `Wingtips => "Wingtips"
  };
};

Js.log(infoAboutShoe(johnDoeShoe));
Js.log(infoAboutShoe(janeDoeShoe));