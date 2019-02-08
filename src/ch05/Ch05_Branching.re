type education =
  Ch05_Variants.education = | School | College | Postgrad | Other;

type paymentMethod =
  Ch05_Variants.paymentMethod =
    | Cash | PurchaseOrder(Ch05_Variants.poNumber);

let getAcmeOrder = paymentMethod =>
  switch (paymentMethod) {
  | PurchaseOrder(poNumber) when String.sub(poNumber, 0, 4) == "ACME" =>
    Some(poNumber)
  | _ => None
  };

let decidePaymentMethod = (orderTotal, orderId) =>
  if (orderTotal <= 50.0) {
    Cash;
  } else {
    PurchaseOrder("PO-" ++ orderId);
  };