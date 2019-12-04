#let rec foldr f a l=
    match l with
    [] -> a
    | x :: xs -> f x (foldr f a xs);;
(* foldr : ('a -> 'b -> 'b) -> 'b -> 'a list -> 'b = <fun>*)

#let sum l=
    let f x y = x + y
    in foldr f 0 l;;
(* sum: int list -> int = <fun>*)

#sum[2; 1; 5];;
(* -: int = 8 *)
