type poNumber = string;

/* GADT definition syntax looks much like regular variant definition syntax,
   except that the data constructors explicitly declare their type at the end. For
   monomorphic types (that is, ones that don't have any type parameters), this
   doesn't look very useful. In the next chapter, we'll see why it's so powerful.
   */
type paymentMethod =
  | Cash: paymentMethod
  | PurchaseOrder(poNumber): paymentMethod;

let paymentCash = Cash;
let paymentMessage = paymentMethod =>
  switch (paymentMethod) {
  | Cash => "Paid in cash"
  | PurchaseOrder(po) => {j|Paid with PO#$po|j}
  };