(*
Definire in CAML una funzione noneg : int list -> int
in modo che restituisca -1 se l contiene solo elementi negativi e restituisca il primo elemento non
negativo di l altrimenti. Ad esempio:
noneg [-1;4;-2;5;0;-5] = 4
noneg [-10;-2;-8] = -1
*)

let rec negativi l=
    match l with
    [] -> true
    | x :: xs -> if x<0 then negativi xs
                 else false;;


let rec noneg l=
    match l with
    [x] -> if x<0 then -1 
           else x

    | x :: y :: xs -> if negativi l then -1
                      else if x<0 then noneg xs
                      else x;;

