#let id x=x;;
(* id: 'a->'a  si puo applicare a valori di tipo diverso *)

#id 3;;
(* -: int = 3 *)

#id 3.5;;
(* -: float = 3.5 *)


#let eq n m = n=m;; (*il primo = e' la definizione di funzione, il secondo e' l'operatore di uguaglianza *)
(* eq: 'a -> 'a -> bool= <fun>*)

#eq 3 4;;
(* -: bool=false *)
