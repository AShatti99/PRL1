(*
Si definisca in CAML, senza utilizzare ricorsione esplicita, una funzione
twice : ’a -> ’a list -> bool
in modo che restituisca true se x occorre in xs esattamente due volte, restituisca false altrimenti.
*)

let contam el l=
    let f x y = if x=el then 1 + y
                else y
    
    in foldr f 0 l;;


let twice el l=
    let f x y= if contam el l = 2 then true
               else false
    
    in foldr f false l;;





                