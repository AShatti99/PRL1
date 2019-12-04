(* 
foldr ripiega una lista, mediante una funzione f, partendo da destra

foldr f a [x1; x2;...; xn] = f x1 (f x2 (... (f xn a) ...))

dove x1 e' un elemento di lista
mentre (f x2 (... (f xn a) ...)) e' il risultato sulla parte rimanente della lista

es: f x y = 1 + y

foldr f 0 [3;4;5] = f 3 (f 4 (f 5 0))
                               =1+0
                        =1+1
                    =1+2
                    =3


f x y = 1 + y 
x e' l'elemento di lista 
y e' il risultato su tutti gli elementi che seguono

f x y = 1 + y
foldr f 0 [3;4;5] e' la lunghezza della lista 
0 cioe' l'elemento a e' il risultato della lista vuota f xn a



g x y = x+y

qual e' il risultato di foldr g 0 [3;4;5]?

foldr g 0 [3;4;5] = g 3 (g 4 (g 5 0)) = 12

Nella foldr la funzione che viene usata ha due argomenti f x y
dove:
x e' l'elemento di lista che stiamo considerando
y e' il risultato su tutti gli elementi di lista che seguono x (il risultato che voglio ottenere)



vogliamo la somma di tutti i valori maggiori di 0  di una lista

foldr f a l 
dove f -> f x y = if x > 0 then x + y 
                  else y
dove a -> 0



La lista dei soli elementi maggiori di 0 di l

foldr f a l 
dove f -> f x y = if x>0 then x :: y
                 else y
dove a -> []

*)

#let rec foldr f a l=
        match l with
        [] -> a
        |x :: xs -> f x (foldr f a xs);;


(* foldr : (tipo di f) ('a -> 'b -> 'b)-> (tipo di a) 'b-> (tipo di l) 'a list -> (tipo ris) 'b= <fun> *)



(* Definire la funzione filter usando foldr, senza ricorsione perche' gia' foldr e' definita ricorsivamente *)

#let filter p l=
    let f x y = if p x then x :: y
                else y
    in foldr f [] l;;

(* dove:
x e' l'elemento di lista che stiamo osservando
y e' il risultato sulla lista che segue x
*)  



(* map usando foldr *)

#let map f l =
    let g x y= f x :: y
    in foldr g [] l;;

(*
map incr [3;4]
= foldr g [] [3;4]

={definizone foldr}

g 3 (foldr g [] [4])
={definizione foldr}

g 3 ( g 4 (foldr g [] []))
={definzione foldr}

g 3 (g 4 [])
={definzione g}

g 3 [5]

={definizione g}

[4;5]

*)