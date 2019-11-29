(* 
CLAUSOLA WHEN

| pattern when condizione ->  espres

pattern uguaglia il valore E la condizione e' vera 

cioe' oltre al fatto che bisogna uguagliare il pattern deve essere vera anche la condizione che sta dopo il when *)

#let rec delneg l = match  l with 
    [] -> []
    | x :: xs when  x < 0 -> delneg xs  
    | x :: xs when  x >=0  -> x :: delneg xs;;
