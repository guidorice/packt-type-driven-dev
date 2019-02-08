// type paymentMethod =
//   Ch05_Variants.paymentMethod =
//     | Cash | PurchaseOrder(Ch05_Variants.poNumber);

open Ch05_Variants;

let paymentMethodThanks = paymentMethod =>
  switch (paymentMethod) {
  | Cash => "We always love cash!"
  | PurchaseOrder(poNumber) => "Thanks for your PO " ++ poNumber
  };

let msg = paymentMethodThanks(Cash);
Js.log(msg);
let msg = paymentMethodThanks(Ch05_Variants.PurchaseOrder("x99b"));
Js.log(msg);