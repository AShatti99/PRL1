(* Funzione che cancella gli elementi in fondo a una lista e mi dice quanti ne ha cancellate *)

#let rec foldr f a l=
    match l with
    [] -> a
    | x :: xs -> f x (foldr f a xs);;

#let canc n l=
    let f x (l1,m)=
        if m<n then (l1, m+1)
        else (x :: l1, m)
    in foldr f([],0) l;;