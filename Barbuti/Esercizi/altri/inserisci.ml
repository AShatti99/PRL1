(* 
Si definisca in CAML una funzione ricorsiva in modo esplicito
inserisci : ’a list -> ’a -> ’a -> ’a list
tale che inserisci lis x y inserisce nella lista lis una nuova occorrenza dell’elemento x
immediatamente dopo l’ultima occorrenza dell’elemento y. Se y non `e presente nella lista, x
non viene inserito.
*)

#let rec member el l=
    match l with
    [] -> false
    | x :: xs -> if x=el then true
                 else member el xs;;


#let rec inserisci l x y=
    match l with
    [] -> []
    | w :: ws -> if not member y l then w :: ws
                 else if member y ws then w :: inserisci ws x y
                 else w :: x :: ws;;
