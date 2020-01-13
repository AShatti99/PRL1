(*
Si definisca in CAML, con la foldr, una funzione
insord : ‘a -> ‘a list -> ‘a list
in modo che (insord x lis), supponendo lis ordinata in modo non decrescente, restituisca la lista ottenuta
inserendo x in lis e ordinata nello stesso modo. Ad esempio:
insord 4 [-1; 0; 3; 3; 6; 10] = [-1; 0; 3; 3; 4; 6; 10]
insord ’b’ [’d’; ’g’; ’h’] = [’b’; ’d’; ’g’; ’h’]
*)

let insord n l=
    let f x (l1,b)= if n>=x then 
                                if b then (x :: n :: l1, false)
                                else (x :: l1, b)
                    else (x :: l1, b)
    
    in let (l1,b) = foldr f ([],true) l
       in l1;;