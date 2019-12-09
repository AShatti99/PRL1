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


(* SECONDA SOLUZIONE*)

(* qui cancelli i primi n elementi *)
#let rec drop n l=
    match (n,l) with    
    (0,l) -> l
    | (n, []) when n>0 -> []
    | (n, x :: xs) when n>0 -> drop(n-1) xs;;

(* qui rovesci la lista *)
#let rec rev l=
        match l with
        [] -> []
        | x :: xs -> rev(xs) @ [x];;

(* qui unisce le due funzioni *)
#let canc n l=
    rev(drop n (rev l));;

(* Rovesci la lista -> cancelli i primi n elementi -> rovesci un'altra volta la lista *)
