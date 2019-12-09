(* Con foldr 

split: 'a list -> 'a -> 'a list * 'a list

Data una lista l e un valore x restituisce la coppia (l1,l2) tali che l1 contiene tutti i valori di l
che precedono l'ultima occorrenza di x e l2 gli altri. Se l non contiene il valore x, l1 sara' la lista vuota.
*)

#let split l n=
    let f x (l1, l2, b) = if b then (x :: l1, l2, b)
                          else if x=n then (l1, x :: l2, true)
                          else (l1, x :: l2, b)

    in let(l1, l2, b) = foldr f ([], [], false) l
        in (l1, l2);;