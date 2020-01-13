(*
Si definisca in CAML una funzione ricorsiva in modo esplicito
split_inizio : int list -> int list * int list
che, data una lista lis di interi, restituisce la coppia (lis1,lis2) tale che
• lis1 e lis2 sono due sottoliste (porzioni possibilmente vuote) di lis,
• lis1 concatenato a lis2 corrisponde esattamente all’intera lista lis
• e lis1 `e la sottolista INIZIALE pi`u lunga possibile i cui elementi sono disposti in ordine
strettamente crescente.
*)

let rec split l=
    match l with
    [] -> ([],[])
    | x :: [] -> ([x],[])
    | x :: y :: ys -> if x<y then let(l1,l2)= split (y::ys)
                                  in (x::l1,l2)
                      
                      else ([x],y::ys)