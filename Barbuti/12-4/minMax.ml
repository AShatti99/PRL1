#let rec minMax l= 
    match l with
    [x] -> (x,x)
    | x :: y :: ys -> let (m1,m2) = minMax(y :: ys)
                      in 
                      if x < m1 then (x,m2)
                      else if x > m2 then (m1,x)
                      else (m1,m2);;
(* minMax: 'a list -> 'a * 'a = <fun> *)



(* Con il foldr *)

#let rec foldr f a l=
    match l with
    [] -> a
    | x :: xs -> f x (foldr f a xs);;
(* foldr : ('a -> 'b -> 'b) -> 'b -> 'a list -> 'b = <fun>*)

#let minMax l=
    let f x (m1,m2)=
        if x < m1 then (x, m2)
        else if x > m2 then (m1,x)
        else (m1,m2)
    in                                              
    match l with               
    x :: xs -> foldr f (x,x) xs;;   
(* minMax: 'a list -> 'a * 'a = <fun> *)    

(* La funzione minMax e' indefinita su [] quindi non posso scrivere semplicemente "in foldr f (x,x) l;;" 
ma devo fare un match perche' serve una lista lunga uno. *)
