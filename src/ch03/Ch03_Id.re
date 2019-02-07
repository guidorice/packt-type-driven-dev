/* module with abstract type t */
module type Id = {
  type t;
  let make: int => t;
  let toInt: t => int;
};

/* module with no explicit signature */
module IntId = {
  type t = int;
  let make = int => int;
  let toInt = t => t; /* why can't this be t => int ? */
};

/* module aliases with explicit signature of Id */
module PersonId: Id = IntId;
module CompanyId: Id = IntId;

let bobId = PersonId.make(1);
let acmeCoId = CompanyId.make(1);

/* type error: */
/* let result = bobId == acmeCoId; */