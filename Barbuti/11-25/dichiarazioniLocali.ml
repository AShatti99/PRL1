(*
Dichiarazioni locali:
#let...(associazioni)...in...(associazioni)...

le associazioni sono locali alla valutazione dell'espressione

es:
#let n=5 in n+2;;  (n=5 e' una dichiarazione locale)
-: int = 7

#n;;
ERRORE
*)


#let rec max l=
    match l with
    [x] -> x
    | x :: y :: ys -> let m= max(y :: ys) in
                        if x>m then x
                        else m;;

(* m lo posso utilizzare solo all'interno del secondo let *)



