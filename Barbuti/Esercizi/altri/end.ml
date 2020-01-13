(*
Si definisca in CAML, USANDO la ricorsione esplicita, la funzione
end : int list -> int list
che, data una lista, restituisce la pi`u lunga sottolista finale che non contiene il valore 1.
Esempi:
end[3;1;7;1;8;10] = [8;10], end[3;4] = [3;4], end[1;3;1;5;7;1] = []
*)

let rec member el l=
    match l with
    [] -> false
    | x :: xs -> if x=el then true
                 else member el xs;;

let rec lend l=
    match l with
    [] -> []
    | x :: xs -> if member 1 (x :: xs) then lend xs
                 else x :: lend xs;;
