/*
 Error: expression's type contains type variables that can't be generalized:

  let optionArr = [|None|];
  let optionRef = ref(None);
  */

let optionArr: array(option(string)) = [|None|];

let optionRef: ref(option(string)) = ref(None);

/*
  This one is slightly trickier as there's no obvious mutation. The pairAll
  function is supposed to convert a list of items into a list of pairs (2-tuples)
  of those items. The problem is that the pair function is generic; the compiler
  can't figure out if it might be mutating anything. If we'd had a monomorphic
  (that is, not generic) function instead, such as let pair(x) = (x + 1, x - 1);,
  then the compiler would be able to figure out that the inputs and outputs
  are just int and there's no mutation involved.

   let pair = x => (x, x);
   let pairAll = List.map(pair);
 */
let pair = x => (x, x);
let pairAll = list => List.map(pair, list);