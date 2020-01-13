(* 
Si definisca in CAML, senza usare la ricorsione esplicita, una funzione
primidiliste : ’a list list -> ’a list
che, data una lista di liste lis, restituisce la lista contenente il primo elemento di ogni lista
NON VUOTA contenuta in lis.
*)

#let primiListe l=
    let f x l1= if x=[] then l1
                else hd x :: l1
    
    in foldr f [] l;;