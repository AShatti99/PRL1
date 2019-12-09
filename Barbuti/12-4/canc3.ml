(* Cancellare tutti gli elementi che seguono l'ultima occorrenza del valore 0.
Se 0 non occorre si cancellano tutti gli elementi 

canc [1; 0; 2; 3; 0; 10; 2] = [1; 0; 2; 3; 0]
canc [1; 2; 3] = []
*)

#let rec member el l=
        match l with
        [] -> false 
        | x :: xs -> if x=el then true
                     else member el xs;;
(* member : 'a -> 'a list -> bool = <fun> *)

#let rec canc l=
    match l with
    [] -> []
    | x :: xs -> if member 0 xs then x :: canc xs
                 else [];;
(* canc: int list -> int list = <fun> *)

(*
canc [0; 2; 0; 3]
={definizione canc}

0 :: canc [2; 0; 3]
={definizione canc}

0 :: if not member 0 [2;0;3]
={definizione canc}

0 :: 2 :: canc [0;3]
={definizione canc}

0 :: 2 :: 0 :: canc [3]
={definizione canc}

0 :: 2 :: 0 :: [] = [0; 2; 0]
*)


(* Senza usare la member *)

#let canc l=
    let rec canc_b l=
        match l with
        [] ->  ([], false)
        | x :: xs -> let (l1,b) =canc_b xs
                     in
                     if b then (x :: l1, b)
                     else if x=0 then ([x], true)
                     else (x :: l1, b)
    
    in let (l1, b) = canc_b l
        in if b then l1
           else if b then l1
           else [];;



(* Se l'esercizio dicesse: in caso in cui 0 non compare, restituire l'intera lista *)

#let canc l=
    let rec canc_b l = ...
    
    in let(l1,b)= canc_b l
        in l1;;


(* Se 0 non occorre la funzione restituisce la lista vuota: *)

#let canc l=
    let rec canc_b l=
        match l with   
        [] -> ([], false)
        | x :: xs -> let (l1,b) = canc_b xs 
                     in 
                     if b then (x :: l1, b)
                     else if x=0 then ([x], true)
                     else ([], false)
    in let (l1,b) = canc_b l
        in l1;;


(* Con foldr 
Se 0 non occorre restituiamo la lista vuota *)

#let canc l=
    let f x (l1, bool)= if b then (x :: l1, b) (* scrivere b o true e' uguale *)
                        else if x=0 then ([x], true)
                        else (l1,b)

    in 
    let(l1,b) = foldr f([], false) l
    in l1;;


(* Con foldr
Se 0 non occorre si restituisce l'intera lista *)

#let canc l=
    let f x(l1,b)= if b then (x :: l1, b)
                   else if x=0 then ([x], trure)
                   else (x::l1,b)
    in let(l1,b) = foldr f ([], false) l1
        in l1;
