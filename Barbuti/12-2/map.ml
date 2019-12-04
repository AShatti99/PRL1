(*
map f l (dove f e' una funzione e l una lista)

il risultato e' la lista in cui gli elementi sono ottenuti applicando la funzione f a tutti gli elementi di l

es:
map incr [3;4;5]= [4; 5; 6]
*)

#let rec map f l=
    match l with
    [] -> []
    | x :: xs -> f x :: map f xs;;

(* map: (tipo f) ('a-> 'b) -> (tipo l) 'a list-> (tipo ris) 'b list = <fun> *)


#map incr [3;4];; 
(* incr: int -> int    incr: int->int quindi map 'a=int 'b=int)
-: int list [4;5] *)


#map pari [3;4];; 
(* pari: int -> bool    pari: int->bool quindi  map 'a=int 'b=bool )
-: bool list = [false, true] *)
