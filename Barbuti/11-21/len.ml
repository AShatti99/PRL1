(* Funzione che restituisce la lunghezza di una lista 

len [2;3] = 2;;
*)

#let rec len l=
    if l=[] then 0
    else len(tl l)+1;;

#len [2; 3];;
(* -: int =2 *)

(*

len[2; 3];;
={definizione len, l=[2; 3] }

len[3]+1;;
={definzione len, l=[3] }

len[]+1+1;;
={definizione len, l=[]}

0 + 1 + 1

={calcolo}

2

*)