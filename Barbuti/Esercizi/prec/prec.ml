(* prec : int list -> int -> int list * int 

Data una lista di interi, l, e un intero, n, restituisce una coppia (l1,m) tale che l1 contiene tutti i valori
di l che precedono la prima occorenza di n, e m e' il numero di valori di l1 che sono maggiori di 0.
Assunzione: esiste in l almeno una occorenza di n

es: prec [-2; 3; 4; 6; -3; 8] 6
mi deve restituire tutti gli elementi che precedono 6 ([-2,3,4]) e il numero di elementi maggiori di 0 (cioe' 2) 
=([-2;3;4], 2*)

#let rec prec l n=
    match l with
    x :: xs -> if x=n then ([],0)          
               else let(l1,m)= prec xs n
               in 
               if x>0 then (x :: l1, m+1)
               else (x :: l1, m);;


(* 2 soluzione *)

#let rec conta l=
    match l with
    [] -> 0
    | x :: xs -> if x>0 then 1 + conta xs
                 else conta xs;;


#let rec precList l n=
    match l with
    [] -> []
    | x :: xs -> if x=n then []
                 else x :: prec xs n;;


#let prec l n=
    let l1= precList l n
    in (l1, conta l1);;
