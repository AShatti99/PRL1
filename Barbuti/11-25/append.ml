(* @ vogliamo definirla come funzione CAML *)

#let rec append l1 l2=
    match l1 with
    []->l2
    | x :: xs -> x :: append xs l2;;

(* append : 'a list ->  'a list -> 'a list = <fun> *)


(*
append [3;4] [3;4;5];;
={definizione append, l1=[3;4], l2=[3;4;5]}

3 :: append [4] [3;4;5]
={definizione append, l1=[4], l2=[3;4;5]}

3 :: 4 :: append [] [3;4;5]
={definzione append, l1=[], l2=[3;4;5]}

3 :: 4 :: [3;4;5]
={notazione}

[3;4;3;4;5]
*)


(* FUNZIONE APPEND IN FORMA CURRYED *)

#let rec append (l1,l2)=
    match l1 with
    [] -> l2    
    | x :: xs -> x :: append (xs l2);;

(* append : 'a list * 'a list -> 'a list = <fun> *)