(* Data una lista vogliamo scrivere una funzione caml che restituisce l'ultimo elemento di una lista. 
Non e' definita su lista vuota *)

#let rec last l = match l with
    [x] -> x
    | x :: xs -> last xs;;

(*
il pattern [] non ci sara' perche' la funzione non e' definita su lista vuota. Se per caso l e' la lista vuota
non uguaglia a nessuno dei pattern e quindi la funzione non sara' definita.

Sappiamo dare subito il risultato se la lista e' lunga uno quindi [x] -> x 
Nel caso in cui la lista non sia lunga uno, si usa il pattern due. Non c'e' bisogno di utilizzare last(tl l)
perche' il tl l e' uguagliato a xs nel pattern. Perche' x uguaglia al primo elemento, xs tutta la parte rimanente


I due pattern non sono MUTUAMENTE ESCLUSIVI cioe' che quando uguaglio un pattern non posso uguagliare l'altro
e viceversa.

[x] e x :: xs  non sono mutuamente esclusivi perche' entrambi possono essere uguagliati alla lista [5] = 5 :: [] 
x=5 e xs=[]

vorrei che tutti i pattern che uso siano MUTUAMENTE ESCLUSIVI quindi il primo pattern si usa per liste lunghe uno
invece il secondo pattern a liste lunghe almeno due

come faccio? faccio in modo che il secondo pattern si uguaglia solo a liste di almeno due elementi cioe: *)

#let rec last l= match l with 
    [x] -> x
    | x :: y :: ys -> last(y :: ys);;

(* facendo in questo modo tolgo il primo elemento della lista cioe' x nel secondo pattern *)