(* 
RICERCA DEL MASSIMO E DEL MINIMO DI UNA LISTA
Risultato potrebbe essere una coppia (min,max) 
*)

#let rec minMax l=
        match l with
        [x] -> (x,x)
        | x :: y :: ys -> let (m1, m2)= minMax(y :: ys)
                            in
                            if x<m1 then (x,m2)
                            else if x>m2 then (m1,x)
                            else (m1,m2);;

(* minMax : 'a list -> 'a * 'a = <fun> *)


(* con accumulatore *)

#let rec minMax_a l(m1,m2)=
    [x] -> if x<m1 then (x,m2)
           else if x>m2 then (m1,x)
           else (m1,m2)
    
    | x :: y :: ys -> if x<m1 then minMax_a (y :: ys) (x,m2)
                      else if x > m2 then minMax_a(y :: ys) (m1,x)
                      else minMax_a (y :: ys)(m1,m2);;

(* minMax_a: 'a list -> 'a * 'a = <fun>*)


(*con accumulatore "nascosto" *)
#let minMax l=
       let rec minMax_a l(m1,m2)=
              match l with
              [x] -> if x<m1 then (x,m2)
                     else if x>m2 then (m1,x)
                     else (m1,m2)
              | x :: y :: ys -> if x<m1 then minMax_a(y :: ys)(x,m2)
                                else if x>m2 then minMax_a(y::ys)(m1,x)
                                else minMax_a (y :: ys) (m1,m2)
       in minMax_a l (hd l,hd l);;


(* QUI NON C'E' MOLTA DIFFERENZA DI EFFICENZA CON ACCUMULATORE O SENZA*)