type education =
  Ch05_Variants.education = | School | College | Postgrad | Other;

type t = {
  id: int,
  name: string,
  education,
};

let bob = {id: 1, name: "Bob", education: College};
let jim = {id: 2, name: "Jim", education: Other};