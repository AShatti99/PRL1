(*
Con foldr definire la lista zeroUno che data una lista di interi restituisce true se e solo se la lista contiene
solamente valori 0 e 1 ed e' ordinata in modo non decrescente 
[0;0;0;1;1] = true
[0;0;0] = true
[1;1] = true

[0;1;0] = false
[0;3;0] = false
*)

(*
se b1 e' falso significa che ha incontrato uno 0 e quindi non puo' piu' incontrare un 1 senno' non sarebbe 
"non decrescente"

se b2 e' falso, significa che mi deve restituire per forza falso 
*)

let zeroUno l=
    let f x (b1,b2) = if x<>0 & x<>1 then (b1,false)      
                      else if x=0 then (false,b2)
                      else if b1 then (b1,b2)
                      else (b1,false)
    
    in let (b1,b2) = foldr f (true,true) l
        in b2;;