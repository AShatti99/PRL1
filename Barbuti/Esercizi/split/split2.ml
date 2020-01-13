(* Data una lista di interi dividerla in due liste (l1, l2) tale che l1 contiene tutti gli elementi 
minori di 0 e l2 quelli maggiori o uguali a 0 

split [-2; 3; 4; -1; 5] = ([-2; -1], [3;4;5] *)

#let split l=
    match l with
    [] -> ([],[])
    | x :: xs -> let(l1,l2) = split xs
                 in
                 if x<0 then (x :: l1,l2)
                 else (l1, x :: l2);;