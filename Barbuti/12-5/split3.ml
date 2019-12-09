(* Con foldr 

split: 'a list -> 'a -> 'a list * 'a list

Data una lista l e un valore x restituisce la coppia (l1,l2) tali che l1 contiene tutti i valori di l
che precedono PRIMA occorrenza di x e l2 gli altri. Se l non contiene il valore x, l1 sara' la lista vuota

split l x = (l1, l2)

l1 contiene gli elementi che precedono la prima occorenza di x

*)

#let split l=
    let f x (l1, l2, b) =
        if x=n then([], x :: l1@l2, true)
        else if b then (x :: l1, l2, b)
            else (l1, x :: l2, b)

    in let (l1, l2, b) = foldr f ([],[],false)
        in (l1,l2);;