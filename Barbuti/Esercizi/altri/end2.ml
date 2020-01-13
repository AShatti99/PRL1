(*
Si definisca in CAML, USANDO FOLDR, una funzione
end : int list -> int -> int list
che, end l n restituisce la lista degli ultimi n elementi positivi di l. Se nella lista il numero
di elementi positivi `e minore di n, end restituisce la lista di tutti i valori positivi di l.
Esempi: end [1, -2; 3; 4; -7; -8] 2 = [3; 4], end [1, -2; 3; 4; -7; -8] 4 = [1; 3; 4]
*)

let lend l n=
    let f x (m,l1) = if m<n then
                            if x>0 then (m+1, x :: l1)
                            else (m,l1)
                     else (m,l1)
    
    in let (m,l1) = foldr f (0,[]) l
       in l1;;


