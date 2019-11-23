(* Scrivere una funzione caml che cancelli l'ultimo elemento di una lista;  e' indefinita su [] 

dellast [3; 4; 5] = [3; 4] *)

#let rec dellast l=
    if tl l =[] then []
    else hd l :: dellast(tl l);;

#dellast [3; 4; 5];;
(* -: int list = [3; 4] *)


(*

dellast [3; 4; 5];;
={definizione dellast, l=[3; 4; 5] }

hd [3; 4; 5] :: dellast [4; 5];;
={definizione hd}

3 :: dellast [4; 5];;
={definizione dellast, l=[4;5] }

3 :: (hd [4; 5] :: dellast [5])
={definzione hd}

3 :: 4 :: dellast[5];;
={definizione dellast, l=[5]}

3 :: 4 :: [];;

={notazione}

[3;4]

*)