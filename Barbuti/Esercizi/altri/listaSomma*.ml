(*
Con foldr definire una funzione listaSomme int list -> int list che data una lista di interi l restituisce la lista
delle somme dei valori compresi tra 2 occorrenze di 0

listeSomme [1;2;0;3;4;0;5;0;8] = [7;5]
listeSomme [0;2;3;0;4] = [5]
listeSomme [3;4]= []
listeSomme [3;0;0;4]=[0] 

(somma degli elementi che precedono lo 0 incontrato, abbiamo incontrato 0?, lista risultato)
=
(s,b,l1)
*)

#let listeSomme l=
    let f x (s,b,l1)= if x=0 then 
                            if b then (0, b, s::l1)
                            else (0, true, l1)
                      else if b then (s+x, b, l1)
                      else (s, b, l1)
                      
    
    in let (s, b, l1)= foldr f(0,false,[])
        in l1;;