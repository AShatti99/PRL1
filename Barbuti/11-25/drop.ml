(* Generalizzazione della tl a una funzione che cancella dalla lista i primi n elementi (se ci sono) 

drop 2 [3;4;5;6] = [5;6]
drop 2 [3] = []
*)

#let rec drop n l=
    match (n,l) with
    (0,l)-> l
    | (n,[]) when n>0 -> []
    | (n, x :: xs) when n>0 -> drop(n-1) xs;;

(* drop: int -> 'a list -> 'a list = <fun> *)