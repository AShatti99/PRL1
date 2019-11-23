(* 
Sulle liste sono predefinite due funzioni:

hd restituisce il primo elemento di una lista, hd e' indefinita su []

tl restituisce la lista di argomenti senza il primo elemento, tl e' indefinita su []

*)

#tl [3;4;5];;
(* -: int list = [4; 5] *)

#tl [];;
(* ERRORE *)

#hd [3; 4; 5] :: tl [3; 4; 5];;
(* -: int list = [3; 4; 5])