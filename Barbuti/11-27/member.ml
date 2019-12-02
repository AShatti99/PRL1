#let rec member el l=
        match l with
        [] -> false
        | x :: xs -> if el=x then true
                     else member el xs;;

(* E' EQUIVALENTE AD: *)

#let rec member el l=
        match l with
        [] -> false
        | x :: xs when x=el -> true
        | x :: xs when x <> el -> member el xs;;

(* il diverso != in caml si scrive <> *)

(* member: 'a -> 'a list -> bool = <fun> *)

(* Qui l'accumulatore non ha senso, quando trova l'elemento restituisce true*)