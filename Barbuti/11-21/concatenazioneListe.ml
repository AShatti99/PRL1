(* L'operatore @ predefinito che e' la concatenazione tra liste. *)

(* operatore infisso *)
#[3;4] @ [5;-2;7]
(* -: int list = [3; 4; 5; -2; 7] *)

(* esiste una funzione predefinita che si chiama prefix che fa diventare un operatore infisso una funzione *)
#prefix @;;
(* -: 'a list -> 'a list -> 'a list = <fun> *)

#prefix@ [3;4] [5;6];;
(* -: int list = [3;4;5;6] *)

#let g = prefix @ [3;4];;
(* g int list -> int list = <fun> *)

#g [4;5];;
(* -: int list = [3;4;4;5] *)

(*
PROPRIETA' DI @
1) l @ [] = [] @ l = l
2) x :: (l1 @ l2) = (x :: l1) @ l2 
*)

