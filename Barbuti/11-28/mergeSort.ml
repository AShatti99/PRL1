(*
MERGE SORT
ordinamento per fusione

si prende una lista qualsiasi e si divide in due, si ordina separatemente le due liste in maniera ricorsiva 
con il merge sort. In questo modo si ottiene due liste ordinate e infinite si procede con la fusione delle due
liste ordinate.

[2;3;5;10]
[0,1,3,7,15]
come si fa a fonderle in una unica lista ordinata?

-si prende i primi due elementi delle due liste, si prende il piu' piccolo e si trasferisce nel risultato 
[0,.........] e si cancella.

-si riprende i primi due elementi rimasti, si prende il piu' piccolo e si trasferisce nel risultato [0,1......]
e si cancella.

e cosi' via...

-quando una lista rimane vuota si trasferisce tutta l'altra parte nel risultato

[0,1,2,3,3,5,7,10,15]

*)


(* qui divide in due la lista -> split[4;2;7;1] = [4;7], [2;1]*)
#let rec split l=
    match l with
    [] -> ([],[])
    | [x] -> ([x],[])
    | x :: y :: ys -> let(l1,l2)= split ys
                        in (x :: l1, y :: l2);;
(* split : 'a list -> 'a list * 'a list = <fun> *)


(* qui fonde le due liste -> merge[4;7][2;1] = [2;1;4;7] *)
#let rec merge l1 l2=
    match(l1,l2) with
    ([],l2) -> l2
    | (l1, []) when l1 <> [] -> l1
    | ( x :: xs, y :: ys) ->
        if x < y then x :: merge xs (y :: ys)
        else y :: merge(x :: xs) ys;;
(* merge: 'a list -> 'a list -> 'a list = <fun> *)

(* qui ordina -> mergesort[2;1;4;7]= [1;2;4;7]*)
#let rec mergesort l=
    match l with
    [] -> []
    | [x] -> [x]
    | x :: y :: ys -> let(l1,l2)= split(x :: y :: ys)
                        in
                        merge(mergesort l1)(mergesort l2);;
(* mergesort: 'a list -> 'a list = <fun> *)
