#let rec foldr f a l=
    match l with
    [] -> a
    | x :: xs -> f x (foldr f a xs);;
(* foldr : ('a -> 'b -> 'b) -> 'b -> 'a list -> 'b = <fun>*)

#let filter p l=
    let f x y = if p x then x :: y
                else y
                
    in foldr f [] l;;
(* filter: ('a -> bool) -> 'a list -> 'a list *)