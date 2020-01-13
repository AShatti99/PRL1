(*
La funzione inser 'a list -> 'a list -> 'a list 
che date due liste, l1, l2, restituisce la lista dei valori che compaiono sia in l1 che in l2 
*)

let rec member el l=
    match l with
    [] -> []
    | x :: xs -> if x=el then true
                 else member el xs;;

let rec inser l1 l2=
    match l1 with
    [] -> []
    | x :: xs -> if member x l2 then x :: inser xs l2
                 else inser xs l2;;
