(* prec : 'a list -> 'a list

Data una lista, restituisca la lista degli elementi che sono immediatamente preceduti da un elemento minore
prec[3; 4; 5; 2; -1; 7; 3; 8] = [4; 5; 7; 8] *)

#let rec prec l=
    match l with
    [] -> []
    | [x] -> []
    | x :: y :: ys -> if x<y then y :: prec(y :: ys)
                      else prec(y :: ys);;