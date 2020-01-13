(* Controllare che la lista contenga solo 0 e 1 e che il numero di occorrenze di 0 e' uguale a quelle di 1*)

#let rec zeroUno l=
    match l with
    [] -> true
    | x :: xs -> if x<>1 & x<>0 then false
                 else zeroUno xs;;

#let rec conta el l=
    match l with
    [] -> 0
    | x :: xs -> if x=el then 1 + conta el xs
                 else conta el xs;;

#let check l=
    if zeroUno l & conta 0 l = conta 1 l then true
    else false;;
