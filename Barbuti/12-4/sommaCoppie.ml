(* Data una lista di coppie di interi. Vogliamo la lista delle somme degli elementi di ogni coppia 

sum [(3,5);(6,3);(1,-1);(10,1)] = [8;9;0;11]
*)

#let rec sum l=
    match l with
    [] -> []
    | (x,y) :: xs -> x+y :: sum xs;;
(* sum: (int * int) list -> int list = <fun> *)



(* Con foldr *)

#let rec foldr f a l=
    match l with
    [] -> a
    | x :: xs -> f x (foldr f a xs);;
(* foldr : ('a -> 'b -> 'b) -> 'b -> 'a list -> 'b = <fun>*)

#let sum l=
    let f(n,m) y = n+m :: y
    in foldr f [] l;;
(* sum: (int * int) list -> int list = <fun> *)