(*
filter p l (p: funzione che restituisce true or false, l invece e' una lista)

Il risultato di filter p l e' la lista che contiene gli elementi di l su cui il predicato p e' vero!

filter pari [3;4;5;6;7;8]=[4;6;8] 
*)

#let rec filter p l =
        match l with
        [] -> []
        | x :: xs when p x -> x :: filter p xs
        | x :: xs when not p x -> filter p xs;;
    

(* filter : (tipo p) ('a -> bool) ->  (tipo l) 'a list -> (tipo ris) 'a list = <fun> *)

#filter s10 [(3,5); (5,5); (6,4); (7,2)];;
(* -: int * int list = [(5,5); (6,4)] *)