(*
TORRE DI HANOI
(Un disco piu' grande non puo' stare in uno piu' piccolo... ci sono 3 paletti) 

Deve spostare n dischi da p1 a p2 utilizzando p3 come ausiliario *)

#let rec hanoi n(p1,p2,p3)=
    match n with
    1 -> [(p1,p2)]
    | n when n>1 -> hanoi(n-1) (p1, p3, p2) @ [(p1,p2)] @ hanoi(n-1) (p3,p2,p1);;

(* hanoi : int -> 'a * 'a * 'a -> ('a * 'a) list = <fun>

#hanoi 3 (1,2,3);;
- : (int * int) list = [1, 2; 1, 3; 2, 3; 1, 2; 3, 1; 3, 2; 1, 2]