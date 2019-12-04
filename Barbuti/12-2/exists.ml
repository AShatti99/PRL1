(*
Quantificazione esistenziale

exists p l
vale true sse p e' vero su almeno un elemento della lista l

exists pari [3;4;5;10] = true
*)

#let rec exists p l =
            match l with
            [] -> false
            | x :: xs when not p x -> exists p xs
            | x :: xs when p x -> true;;

(* exists : ('a -> bool) -> 'a list -> bool = <fun> *)
