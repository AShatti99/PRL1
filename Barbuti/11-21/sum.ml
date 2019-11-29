(* Funzione che restituisce la somma degli elementi di una lista 

sum [2; 3] = 5
*)

#let rec sum l=
    if l=[] then 0
    else sum(tl l) + hd l;;

#sum [2; 3];;
(* -: int = 5 *)

(*

sum [2;3];;
={definizione sum, l=[2;3]}

sum(tl)+hd l;;
={}

sum[3]+2;;
={definzione sum, l=[3]}

sum(tl[3]) + hd[3] + 2
={}

sum[] + 3 + 2
={definzione sum}

0 + 3 + 2
={calcolo}

5

*)