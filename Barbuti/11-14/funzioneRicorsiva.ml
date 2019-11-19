#let rec f n = 
        if n=0 then 0
        else f(n-1)+2;;


#f 3;;
(* -: int =6 *)

(* 

f(2) + 2
f(1) + 2 + 2
f(0) +2 + 2 + 2
= 0 + 2 + 2 + 2 
= 6 

*)