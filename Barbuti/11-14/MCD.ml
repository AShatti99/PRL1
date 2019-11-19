#let rec MCD(n,m)=
        if n=m then n
        else if n>m then MCD(n-m,m)
        else MCD(n,m-n);;

#MCD (12,9);;
(*-: int = 3 *)



#let rec MCD1 n m =
        if n=m then n
        else if n>m then MCD1(n-m) m
        else MCD1 n (m-n);;

#MCD1 12 9;;
(* -: int = 3 *)

#MCD1 12;;
(* -: int -> int = <fun> *)

