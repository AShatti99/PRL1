(*
Definire in CAML una funzione
sumflat : int list list -> int list
in modo che (sumflat ll) restituisca la lista di interi in cui al posto di ogni lista xs in ll compare la somma 
dei valori in xs. Si ricorda che la somma dei valori contenuti nella lista vuota `e convenzionalmente 0.
*)

let rec sum l=
    match l with
    [] -> 0
    | x :: xs -> x + sum xs;;


let rec sumflat l=
    match l with
    [] -> []
    | x :: xs -> sum x :: sumflat xs;;