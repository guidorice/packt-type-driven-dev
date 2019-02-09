/*
 type ref('a) = {mutable contents: 'a};
 let ref: 'a => ref('a);
 let (:=): (ref('a), 'a) => unit;
 let (^): ref('a) => 'a;
 let incr: ref(int) => unit;
 let decr: ref(int) => unit;
 */
 