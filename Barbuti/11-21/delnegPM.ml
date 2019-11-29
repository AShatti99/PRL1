(* Funzione che cancella tutti gli elementi negativi *)

#let rec delneg l = match l with
    [] -> []
    | x :: xs ->  if x<0 then delneg xs
                  else x :: delneg xs;

(* guarda "when.ml" *)