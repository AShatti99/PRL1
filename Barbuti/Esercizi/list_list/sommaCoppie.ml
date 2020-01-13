(* Data una lista di coppie di interi. Vogliamo la lista delle somme degli elementi di ogni coppia 

sum [(3,5);(6,3);(1,-1);(10,1)] = [8;9;0;11]
*)

#let rec sum l=
    match l with
    [] -> []
    | (x,y) :: xs -> x+y :: sum xs;;