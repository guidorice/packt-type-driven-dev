let color = `Red;
let angle = `degrees(45.0);

type event = [
  | `clickTap(int, int)
  | `keypress(char)
  | `pointerMove(int, int, int, int)
];

type mobileEvent = [ event | `deviceShake(int) | `accel(float)];

let pressA: mobileEvent = `keypress('a');
// event does not allow deviceShake (mobileEvent does though)
// let shakeThrice: event = `deviceShake(3);
let shakeThrice: mobileEvent = `deviceShake(3);