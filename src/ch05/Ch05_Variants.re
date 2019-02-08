type education =
  | School
  | College
  | Postgrad
  | Other;
type poNumber = string;
type paymentMethod =
  | Cash
  | PurchaseOrder(poNumber);

let bobEdu = College;
let bobPaymentMethod = Cash;
let jimEducation = Other;
let jimPaymentMethod = PurchaseOrder("jimbo997");

// refutable patterns

/*
 let 3 = 3;

 let getPoNumber = paymentMethod => {
   let PurchaseOrder(poNumber) = paymentMethod;
   poNumber;
 };
 */