(*
Si definisca in CAML, USANDO FOLDR, una funzione
prec : ’a list -> ’a list
che, data una lista, restituisce la lista degli elementi che sono preceduti da un elemento minore.
Si precisa che il primo elemento di una lista NON `e preceduto da un elemento minore.
Esempio: prec [3;4;5;2;-1;7;3;8] = [4;5;7;8]
*)

let rec last l=
    match l with
    [x] -> x
    | x :: xs -> last xs;;


let rec canc l=
    match l with
    [x] -> []
    | x :: xs -> x :: canc xs;;


let prec l=
    let f x (y,l1) = if x<y then (x, y :: l1)
                     else (x,l1)
    
    in let (y,l1) = foldr f (last l, []) (canc l)
       in l1;;