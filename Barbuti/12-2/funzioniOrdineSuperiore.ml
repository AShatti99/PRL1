(*
FUNZIONI DI ORDINE SUPERIORE AL PRIMO

Funzioni che hanno come argomento o come risultato altre funzioni

ES:
Le funzioni curryed sono funzioni di ordine superiore perche' restituiscono funzioni
*)

#let sum x y = x + y;; 
(* sum: int -> int -> int = <fun> *)

#let g = sum 3;;
(* g : int -> int = <fun> *)


#let apply f x = f x;;
(* apply : (tipo di f) ('a -> 'b) -> (tipo di x) 'a -> (tipo ris) 'b = <fun> *)

#let incr x = x+1;;
(* incr: int -> int = <fun> *)

#let s (x,y) = x + y;;
(* s : int * int -> int = <fun> *)

#apply incr 3;; (*la posso applicare a apply: 'a=int 'b=int) 
-: int = 4 *)


#apply s 3;; (s: int * int -> int) ('a=int * int, 'b=int)
(* ERRORE DI TIPO perche' il 3 non e' int * int *)

#apply s (3,4);;
(* -: int = 7
QUI VA BENE perche' c'e' una coppia (3,4) *)



(*
FUNZIONI DI ORDINE SUPERIORE CHE COINVOLGONO LISTE CAML

Predicato: una funzione che restituisce un valore di verita' (bool)

ES: *)

#let pari n= n mod 2 = 0;; (*questo "pari" e' un predicato)
pari : int -> bool = <fun> *)

#let s10(n,m) = n+m =10;;
(* s10 : int * int -> bool = <fun> *)

#s10 (3,7);;
(* -: bool = true *)

#s10(5,6);;
(* -: bool= false *)


















