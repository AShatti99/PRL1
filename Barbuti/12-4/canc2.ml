(* Funzione che cancella gli elementi in fondo a una lista e mi dice quanti ne ha cancellate *)

#let canc n l=
    let rec canc_n n l=
            match l with
            [] -> ([],0)
            | x :: xs -> let (l1,m) = canc_n n xs
                         in 
                         if m<n then (l1, m+1)
                         else (x :: l1, m);
    
    in let(l1,m) = canc_n n l
       in l1;;


(* Con foldr *)

#let rec foldr f a l=
    match l with
    [] -> a
    | x :: xs -> f x (foldr f a xs);;

#let canc n l=
    let f x (l1,m)=
        if m<n then (l1, m+1)
        else (x :: l1, m)
    in foldr f([],0) l;;
