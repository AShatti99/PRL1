(*
Con foldr, data una lista cancella gli elementi contigui, lasciandone una sola occorrenza
'a list -> 'a list
[-2;2;2;3;-10;14] = [-2;2;3;-10;14]
*)

#let remove l=
    let f x l1= if l1=[] then x::l1
                else if x = hd l1 then l1
                else x :: l1
    
    in foldr f [] l;;