(*  Funzione che restituisce la lunghezza di una lista *)

#let rec len l = match l with 
    []->0
    | x :: xs -> len xs + 1;
