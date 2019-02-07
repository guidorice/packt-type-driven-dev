let bob = (1, "Bob");
let jim = ("Jim", 2);

/* type error */
/* let bobEqualsJim = bob == jim; */

let (bobId, bobName) = bob;
let (jimName, _) = jim;

let bobId = fst(bob);
let jimId = snd(jim);

Js.log2(bobId, jimId);

let tom = (3, "tom", 45);
/* type error */
/*  let (tomId, _) = tom; */