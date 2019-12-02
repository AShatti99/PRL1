(* Funzione reverse : rovescia gli elementi di una lista 

rev [3;4;5] = [5;4;3] *)

#let rec rev l=
    match l with
    [] -> []
    | x :: xs -> rev xs @ [x];;

(*rev: 'a list -> 'a list = <fun> *)

(* Non posso utilizzare :: per attaccare x infondo, perche' :: ha come primo argomento un elemento di lista
e come secondo argomento una lista, in questo caso sarebbe il contrario *)

(*
rev [3;4;5]
={definizione di rev}

rev [4;5] @ [3])
={definizione di rev}

rev [5] @ [4] @ [3]
={definizione di rev}

rev [] @ [5] @ [4] @ [3]
={definizione di rev}

[]=[5;4;3]

NON E' PER NIENTE EFFICIENTE PERCHE' DEVE SCANDIRE TUTTA LA LISTA
*)  


(* rev con accumulatore *)

#let rec rev_a l a=
    match l with
    [] -> a
    | x :: xs -> rev_a xs (x::a);;

(* rev_a : 'a list -> 'a list -> 'a list = <fun>

rev_a[3;4;5] []
={definizione rev_a}

rev_a[4;5] (3 :: [])
={definizione rev_a}

rev_a[5] (4 :: [3])
={definizione rev_a}

rev_a[] (5 :: 4 :: [3]
={definizione rev_a}

[5;4;3]

Molto piu' efficiente, il problema che bisogna utilizzare l'accumulatore giusto, se utilizzassi l'accumulatore 7,
il risultato sarebbe il rev_a di quella lista ma con un 7 infondo, per risolvere bisogna nasconderlo in un'altra
funzione. *)

#let rev l=
    let rec rev_a l a= 
        match l with
        [] -> a
        | x :: xs -> rev_a xs (x::a)
    in rev_a l [];;

(* rev : 'a list -> 'a list = <fun> *)

