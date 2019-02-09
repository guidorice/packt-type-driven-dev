/* Each slot on the board can be taken by X or O, or it can be empty. */
type slot =
  | X
  | O
  | Empty;

let newBoard = () => Array.make(9, Empty);

/* Coords are as follows on the board:
   1 2 3
   4 5 6
   7 8 9
    */

let play = (player, coord, board) => board[coord - 1] = player;

let xWon = board =>
  switch (board) {
  | [|X, X, X, _, _, _, _, _, _|]
  | [|_, _, _, X, X, X, _, _, _|]
  | [|_, _, _, _, _, _, X, X, X|]
  | [|X, _, _, X, _, _, X, _, _|]
  | [|_, X, _, _, X, _, _, X, _|]
  | [|_, _, X, _, _, X, _, _, X|]
  | [|X, _, _, _, X, _, _, _, X|]
  | [|_, _, X, _, X, _, X, _, _|] => true
  | _ => false
  };