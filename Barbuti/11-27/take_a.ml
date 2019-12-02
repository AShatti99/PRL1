(*take con accumulatore*)

#let rec take_a n l a =
    match (n,l) with
    |(0, l) -> a
    | (n, []) when n>0 -> a
    | (n, x :: xs) when n>0 -> take_a(n-1) xs (a @ [x]);;

(* la concatenazione @ e' inefficiente, in questo caso e' meglio non utilizzare l'accumulatore*)
