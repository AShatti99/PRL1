(* 
Funzioni con accumulatore:
sono funzioni in cui l'accumulatore e' un argomento in piu' alla funzione che in qualche modo accumula
il risultato 
*)

#let rec max_a l a=
        match l with
        [x] -> if x>a then x
               else a 
    
        | x :: y :: ys -> if x>a then max_a(y :: ys) x
                          else max_a(y :: ys) a;;



(* a e' l'accumulatore. L'accumulatore ha l'utilizzo che quando arriva alla lista lunga uno mi dice qual e'
il massimo degli elementi che precedevano x, quindi da il massimo tra gli elementi 
che ho analizzato *)

(*

max_a [-3; -4; -2] -3
={definizione di max_a}

max_a[-4;-2] -3
={definizione di max_a}

max_a [-2] -3
={definizione di max_a}

-2

Arrivato infondo so dare subito il risultato, questo si chiama RICORSIONE IN CODA (Tail Recorsion)

*)


(*La funzione max_a per calcolare il massimo di una lista deve avere inizialmente l'accumulatore giusto
se prendiamo:

max_a[-3; -4; -2] 0

il risultato e' sbagliato perche' mi restituisce 0 che non e' un elemento della lista, quindi c'e' un problema
di passargli l'accumulatore giusto inizialmente. 

Come si fa per evitare di passargli un accumulatore sbagliato?
Si prende la definizione di max con accumulatore e si "nasconde" dentro la definizione della funzione
senza accumulatore.

es: *)

#let max l=
        let rec max_a l a= 
                match l with
                [x] -> if x>a then x
                        else a 
    
                | x :: y :: ys -> if x>a then max_a(y :: ys) x
                                   else max_a(y :: ys) a
        in max_a l (hd l);; 

(*Per esempio l'accumulatore puo' essere il primo elemento della lista cioe' hd l*)


(* Quando l'accumulatore diventa un elemento della lista *)

#let rec max l=
    match l with
    [x] -> x
    | x :: y :: ys -> if x > y then max(x :: ys)
                        else max(y :: ys);;


(*
max [-3; -4; -2]
={definizione di max}

max [-3;-2]
={definizione di max}

max[-2]
={definzione di max}

-2
*)
