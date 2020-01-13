(* Definire la foldr per usare una funzione prec 'a list -> 'a -> 'a -> bool che data una lista l e due valori
n e m restituisce true se e solo se nella lista tutte le occorrenze di n precedono tutte le occorrenze di m 

prec [3;4;3;5;2;10;2] 3 2 = true
prec [3;2;4;1;3;2] 3 2 = false *)

(* La lista viene analizzata partendo dal fondo e andando alla testa della lista 

( ho trovato un valore n? , fin qui tutto bene? ) *)


#let prec l n m=
    let f x (b1, b2) = if not b2 then (b1,b2)
                        else if x=n then (true,b2)
                        else if x=m then 
                               if b1 then (b1 ,false)
                                else (b1,b2)
                        else (b1,b2)
    
    in let (a,b) = foldr f (true,true) l
        in b;;