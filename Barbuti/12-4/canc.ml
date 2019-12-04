(* Cancellare gli ultimi n elementi da una lista (se ci sono)

canc 3 [1; 2; 3; 4; 5] = [1; 2]
canc 3 [1; 2] = []
*)

#let rec len l=
    match l with
    [] -> 0
    | x :: xs -> 1 + len xs;;
(* len: 'a list -> int *)

#let rec canc n l=
    match l with
    [] -> []
    | x :: xs -> if len(x :: xs) <= n then []
                 else x :: canc n xs;;
(* canc: int -> 'a list -> 'a list *)
