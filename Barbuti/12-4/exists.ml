#let rec foldr f a l=
    match l with
    [] -> a
    | x :: xs -> f x (foldr f a xs);;
(* foldr : ('a -> 'b -> 'b) -> 'b -> 'a list -> 'b = <fun>*)

#let exists p l=
    let f x y = if p x  then true 
                else y
    in foldr f false l;;
(* exists : ('a -> bool) -> 'a list -> bool = <fun>*)