(*
Usando il fodlr si definisca la funzione split :

split : 'a list -> 'a list * int list

che data una lista l restituisce la coppia (l1, l2) tali che:
-l1 @ l2 = l
-l2 e' la sottolista finale piu' lunga possibile i cui elementi sono in ordine crescente 

split [2;3;-1;4;5;10] = ([2,3],[-1;4;5;10])
*)

#let split l=
    let f x (l1, l2, b)=
        if l2=[] then (l1, x :: l2,b) (* x :: l2 = [x]*)
        else if b then 
                if x < hd l2 then (l1, x :: l2, b)
                else (x :: l1, l2, false)
        else (x :: l1, l2, b)

    in let(l1,l2,b) = fodlr f ([],[], true) l
        in (l1, l2);;
