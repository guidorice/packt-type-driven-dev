open Ch04_RecordLiterals;

let {id: bobId, name: bobName} = bob;
let {id, name: jimName} = jim;
let {id: tomId, name: _} = tom;
let {name, _} = tom;
let {name: tomName} = tom;