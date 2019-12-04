(*
Funzione che verifica che un predicato sia vero su tutti gli elementi di una lista

forAll pari [2;8;10]= true
forAll pari [2;3;8;10]= false
forAll s10 [(5,5); (7,3)]= true
forAll pari [(5,5); (7,3)]= ERRORE DI TIPO perche' pari non si applica a coppie di interi
*)

#let rec forAll p l=
    match l with
    [] -> true
    | x :: xs when not(p x)-> false
    | x :: xs when p x -> forAll p xs;;

(* p sta per PREDICATO *)
(* forAll : (tipo di p) ('a -> bool) -> (tipo di l) 'a list -> (tipo del res) bool = <fun> *)


