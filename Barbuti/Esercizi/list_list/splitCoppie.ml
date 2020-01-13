(* Ricorsione esplicita la funzione

split ('a * 'a) list -> ('a * 'a) list * ('a * 'a) list 

che data una lista di coppie restituisce due liste. La prima con le coppie in cui il primo elemento e'
maggiore del secondo, la seconda con le coppie in cui il primo elemento e' minore o uguale al secondo
es split [(2,3); (6,5); (5,5)] = [(6,5)], [(2,3); (5,5)] 
*)

let rec split l=
    match l with
    [] -> ([],[])
    | (x,y) :: ys when x>y-> let (l1,l2)= split ys
                             in ((x,y) :: l1, l2)
    
    | (x,y) :: ys when x<=y-> let (l1,l2) = split ys
                              in (l1, (x,y) :: l2);;