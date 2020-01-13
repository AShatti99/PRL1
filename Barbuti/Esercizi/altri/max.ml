(*
Si definisca in CAML, con la foldr, una funzione
max : ’a list -> ’a * int * int
in modo che restituisca una terna (max, n, m) in cui max `e il valore massimo presente nella lista, n `e
il numero di occorrenze di max nella lista e m `e il numero di elementi della lista. 
La funzione non `e definita se la lista `e vuota.
N.B. Non `e consentito l’utilizzo della funzione length.
*)

let rec last l=
    match l with
    [x] -> x
    | x :: xs -> last xs;;


let rec canc l=
    match l with
    [x] -> []
    | x :: xs -> x :: canc xs;;


let max l=
    let f x (max, n, m) = if x>max then (x, n, m+1)
                          else if x=max then (max, n+1, m+1)
                          else (max, n, m+1)
    
    in foldr f (last l, 1, 1) (canc l);;