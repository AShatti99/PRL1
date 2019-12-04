(* less : int list ->  bool
Data una lista controlla che ogni elemento, escluso l'ultimo, sia minore della somma di tutti gli elementi
che seguono

less[1; -2; 2; 3; -10; 14]= true
less[1; 12; 3; 4; -10; 14]= false
*)

#let rec sum l=
    match l with
    [] -> 0
    | x :: xs -> x + sum xs;;

#let rec less l=
    match l with
    [] -> true
    | [x] -> true
    | x :: y :: ys -> if x < sum(y :: ys) then less (y :: ys)
                      else false;;


