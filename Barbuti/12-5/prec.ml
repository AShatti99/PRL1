(* Con foldr 

prec: 'a list -> 'a list

Data una lista l, restituisce la lista degli elementi che sono preceduti da un elemento minore. 
Il primo elemento di una lista non e' preceduto da un elemento minore.

prec [3;4;5;2;-1;7;3;8] = [4; 5; 7; 8] *)

#let prec l =
    let f x (y, l1)=
        if x<y then (x, y :: l1)
        else (x, l1)
    in let (n,l2) = foldr f (last l, []) (cancLast l)

#let rec last l=
    match l with
    [x] -> x
    | x :: y :: ys -> last(y :: ys);;

#let rec cancLast l=
    match l with
    [] -> []
    |[x] -> []
    | x :: y :: ys -> x :: cancLast(y :: ys);;