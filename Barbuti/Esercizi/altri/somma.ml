(*
Si definisca in CAML, utilizzando la foldr, una funzione
somma : int list -> int -> int
in modo che (somma lis n) restituisca:
• la somma degli elementi di lis che precedono la prima occorrenza di n, se n occorre in lis
• la somma di tutti gli elementi di lis, se n non occorre in lis
Ad esempio:
somma [2; 3; 4; 5; 4; 7] 4 = 5
somma [4; 2; 3; 4; 7] 4 = 0
somma [2; 3; 5] 4 = 10
*)

let somma l n=
    let f x s= if x=n then 0
               else x+s
    
    in foldr f 0 l;;