(* 
Ordinamento di una lista 
[3;2;-2;10] -> [-2;2;3;10]

INSERTION SORT
se la lista ha almeno un elemento (x :: xs) si ordina ricorsivamente xs e alla lista risultante si aggiunge
x in posizione corretta

es: 
    [3; -2; 1]
3   [-2;1]     -> [-2;1;3]
-2  [1]        -> [-2;1]
1   []         -> [1]
*)

#let rec insord el l= (* si suppone che l sia ordinata in senso non decrescente *)
    match l with
    [] -> [el]
    | x :: xs -> if el <= x then el :: x :: xs
                 else x :: insord el xs;;

(* insord: 'a -> 'a list -> 'a list = <fun> *)

#let rec inssort l=
    match l with
    [] -> []
    | x :: xs -> insord x (inssort xs);;

(* inssort: 'a list -> 'a list = <fun> *)

(* [-2;3;10;3] ordino in senso non decrescente e ottengo [-2;3;3;10]
Non e' possibile ordinarla in senso crescente *)

(* QUESTA FUNZIONE NON E' MOLTO EFFICIENTE PERCHE' DEVE SCORRERE TUTTA LA LISTA PER INSERIRE L'ELEMENTO*)
