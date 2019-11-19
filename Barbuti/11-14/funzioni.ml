
#let f(x)=x+1;; (* f e' il nome della funzione e x e' il nome del parametro *)

#f(3);;
(* -:int= 4 *)


#let g n m = n+m+1;;  (* in forma curryed, prende gli argomenti in sequenza*)

#g 2 3;;
(* -:int= 6 *)

#g 2;; (* Non lo posso utilizzare cosi' com'e', perche' manca il valore di m *)

#let f=g 2;; (* Ma puoi dichiarare una nuova funzione che prende il suo risultato *)

#f 3;;
(* -:int =6, perche' 2 (g) + 3 (f) + 1 = 6 *)






