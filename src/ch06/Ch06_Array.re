let empty = [||];
let singleton = [|1|];
let multi = [|false, true, true|];

multi[1] = false;
Js.log(multi[1]);