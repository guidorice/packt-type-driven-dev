module NonEmptyString: {
  type t = pri string;
  let makeExn: string => t;
} = {
  type t = string;
  let makeExn = string => {
    assert(string != "");
    string;
  };
};

module PositiveFloat: {
  type t = pri float;
  let makeExn: float => t;
} = {
  type t = float;
  let makeExn = float => {
    assert(float > 0.);
    float;
  };
  let toFloat = t => t;
};

let sendMoney =
    (from: NonEmptyString.t, to_: NonEmptyString.t, amount: PositiveFloat.t) => {
  let from = (from :> string);
  let to_ = (to_ :> string);
  let amount = (amount :> float);
  Js.log({j|Send \$$amount from $from to $to_|j});
};

sendMoney(
  NonEmptyString.makeExn("Alice"),
  NonEmptyString.makeExn("Bob"),
  PositiveFloat.makeExn(32.),
);