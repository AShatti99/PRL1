(*
Si definisca in CAML, usando la funzione foldr, una funzione

split : ’a list -> ’a -> ’a list * ’a list

che, data una lista l e un valore x restituisce una coppia di liste (l1, l2) tali che l1 contiene
tutti i valori di l che precedono l’ultima occorrenza di x, e l2 gli altri valori. Se l non contiene
il valore x, l1 sar`a la lista vuota.
*)

let split l n=
    let f x (l1,l2,b) = if x=n then (l1, x::l2, true)
                        else if b then (x :: l1, l2, b)
                        else (l1, x :: l2, b)
    
    in let (l1,l2,b) = foldr f ([],[],false) l
       in (l1,l2);;