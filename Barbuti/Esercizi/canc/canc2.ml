(* Funzione che cancella n elementi in fondo a una lista e mi dice quanti ne ha cancellate *)
#let rec len l=
    match l with
    [] -> 0
    | x :: xs -> 1 + len xs;;

#let rec canc n l=
    match (n,l) with
    (0,l) -> (l,0)
    | (n,[]) when n>0 -> ([],0)
    | (n, x :: xs) when n>0 -> let(l1,m) = canc n xs  
                                in
                                if len(x :: xs) <= n then ([],m+1)
                                else (x :: l1, m);;                