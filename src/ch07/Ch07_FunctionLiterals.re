let addV1 = (int1, int2) => int1 + int2;

let addV2 = (int1, int2) => int1 + int2;

let addV3 = (int1, int2) => int1 + int2;

module FloatConverter = {
  type t('a) = {
    encodeExn: 'a => float,
    decodeExn: float => 'a,
  };
  let float = {encodeExn: float => float, decodeExn: float => float};
  let int = {encodeExn: float_of_int, decodeExn: int_of_float};
};

let greet = ({Ch03_Domain.Person.id, name}) => {j|Hello, $name with id $id|j};