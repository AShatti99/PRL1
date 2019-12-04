(* Cancellare tutti gli elementi che seguono l'ultima occorrenza del valore 0.
Se 0 non occorre si cancellano tutti gli elementi 

canc [1; 0; 2; 3; 0; 10; 2] = [1; 0; 2; 3; 0]
canc [1; 2; 3] = []
*)

#let rec member el l=
        match l with
        [] -> false 
        | x :: xs -> if x=el then true
                     else member el xs;;
(* member : 'a -> 'a list -> bool = <fun> *)

#let rec canc l=
    match l with
    [] -> []
    | x :: xs -> if member 0 xs then x :: canc xs
                 else [];;
(* canc: int list -> int list = <fun> *)