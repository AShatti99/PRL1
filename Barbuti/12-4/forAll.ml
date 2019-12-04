#let rec foldr f a l=
    match l with
    [] -> a
    | x :: xs -> f x (foldr f a xs);;
(* foldr : ('a -> 'b -> 'b) -> 'b -> 'a list -> 'b = <fun>*)

#let forAll p l=
    let f x y = if p x then y
                else false
    in foldr f true l;;
(* forAll : ('a -> bool) -> 'a list -> bool = <fun> *)

