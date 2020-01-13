(*
Senza utilizzare ricorsione esplicita, definire in CAML una funzione
disp : int list -> int * int
in modo che restituisca:
• la coppia costituita dagli ultimi due elementi dispari di lis, se questa contiene almeno due elementi dispari
• la coppia (0, d) se d `e l’unico elemento dispari di lis
• la coppia (0, 0) se lis non contiene elementi dispari.
*)

let disp l=
    let f x (k,j,m) = if m=0 & not x mod 2 =0 then (k,x,m+1)
                      else if m=1 & not x mod 2 = 0 then (x,j,m)
                      else (k,j,m)
    
    in let (k,j,m) = foldr f (0,0,0) l
       in (k,j);;