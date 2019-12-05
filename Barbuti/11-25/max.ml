(* Cercare il valore massimo di una lista. Funzione non definita su [] *)

#let rec max l =
    match l with
    [x] -> x
    | x :: y :: ys ->
        if x > max (y :: ys) then x 
        else max (y :: ys);;

(* max : 'a list -> 'a = <fun> *)
