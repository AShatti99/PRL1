(* Funzione che restituisce l'n-esimo elemento di una lista. Se non esiste l'n-esimo elemento la funzione
e' indefinita

n_esimo 2 [3;4;5] = 4
n_esimo 3 [2;4] = indefinita
*)

#let rec n_esimo n l=
    match (n,l) with
    (n, x :: xs) when n>0 -> 
        if n=1 then x
        else n_esimo (n-1) xs;;

(* n_esimo: int -> 'a list -> 'a = <fun> *)

(* i pattern
(0,l) -> l non e' definita quindi non si mette
(n,[]) when n>0 -> [] non e' definita quindi non si mette
*)