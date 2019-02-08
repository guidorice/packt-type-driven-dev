/** input variant has upper bound [< */

let eventToString = event =>
  switch (event) {
  | `clickTap(x, y) => {j|`clickTap($x, $y)|j}
  | `keypress(char) => {j|`keypress($char)|j}
  | `pointerMove(x1, y1, x2, y2) => {j|`pointerMove($x1, $y1, $x2, $y2|j}
  | `deviceShake(times) => {j|`deviceShake($times)|j}
  | `accel(mssq) => {j|`accel($mssq)|j}
  };

let pressAString = eventToString(Ch05_PolymorphicVariantBasics.pressA);
Js.log2("ok", pressAString);

/* best avoid let binding with polymorphic variants, but it does work */
let `degrees(angleVal) = Ch05_PolymorphicVariantBasics.angle;