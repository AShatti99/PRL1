(* Data una lista vogliamo scrivere una funzione caml che restituisce l'ultimo elemento di una lista.
La funzione e' indefinita su lista vuota 

last[3; 4; 5] = 5 *)

#let rec last l =
    if tl l=[] then hd l
    else last(tl l);;

#last [3; 4; 5];;
(* -: int =5 *)


(*

last [3; 4; 5];;
={definizione di last, l=[3; 4; 5] }

last [4; 5];;
={definizione di last, l=[4;5] } 

last [5];;
={definizione di last, l=[5] }

hd[5];;
={definizione di hd}

5

*)
