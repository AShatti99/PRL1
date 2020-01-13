(*
Si definisca in CAML, USANDO FOLDR, una funzione
init : int list -> int list
che, data una lista, restituisce la pi`u lunga sottolista iniziale che non contiene il valore 1.
Esempi:
init[3;5;1;7;1;8] = [3;5], init[3;4;5] = [3;4;5], init[1;3;] = []
*)

#let init l=
    let f x l1= if x=1 then []
                else x :: l1
    
    in foldr f [] l;;


