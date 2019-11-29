(* Generalizzare hd a una funzione che restituisce i primi n elementi di una lista (se ci sono) 

take 2 [3;4;5;6] = [3;4]
take 2 [3] = [3] 
*)

#let rec take n l=
    match (n,l) with
    (0,_) -> []
    | (n,[]) when n>0 -> []
    | (n, x::xs) when n>0 -> x :: take(n-1) xs;;

(* take : int -> 'a list -> 'a list -> 'a list = <fun> *)

(* Per "_" si intende QUALSIASI VALORE che pero' non posso utilizzare nel risultato perche' non ha un nome *)