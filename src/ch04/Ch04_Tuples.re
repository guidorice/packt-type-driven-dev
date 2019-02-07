let bob = (1, "Bob");
let jim = ("Jim", 2);

/* type error */
/* let bobEqualsJim = bob == jim; */

let (bobId, bobName) = bob;
let (jimName, _) = jim;

let bobId = fst(bob);
let jimId = snd(jim);