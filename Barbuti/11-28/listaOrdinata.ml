(* 
Una lista ordinata e'
- crescente: ogni elemento e' minore del successivo  [1;3;5;10]
-non decrescente: ogni elemento e' minore o uguale al successivo  [1;3;3;5;10]

Funzione caml che ci dice se una lista e' ordinata in senso crescente *)

#let rec crescente l= 
    match l with
    [] -> true
    | [x] -> true
    | x :: y :: ys -> if x>=y then false
                      else crescente (y :: ys);

(* crescente: 'a list -> bool = <fun> *)