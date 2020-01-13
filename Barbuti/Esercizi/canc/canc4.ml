(* Usando la foldr, dato un intero n e una lista, elimina gli ultimi elementi di una lista *)

#let canc l n=
    let f x (l1,m) = if m<n then (l1,m+1)
                     else (x :: l1, m)
    
    in let (l1,m) = foldr f ([],0) l
       in l1;; 