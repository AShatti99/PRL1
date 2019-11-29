(* Scrivere una funzione caml che cancelli l'ultimo elemento di una lista;  e' indefinita su []  *)

#let rec dellast l = match l with
    [x] -> []
    | x :: y :: ys -> x :: dellast(y :: ys);;