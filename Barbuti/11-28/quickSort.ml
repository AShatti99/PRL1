(*
QUICK SORT
[2; -3; -4; 5; 25; 10]
si prende qualsiasi elemento della lista, per esempio il primo
e si divide tutta la lista in due, gli elementi maggiori e minori di quell'elemento:

[-3; -4] [5; 25; 10]

si ordinano ricorsivamente con quick sort

[-4; -3] @ [2] @ [5; 10; 25] 

Dobbiamo scrivere prima una funzione che divide una lista in due parti sulla base di un elemento discriminante: 
*)

#let rec split l n=
    match l with
    [] -> ([],[])
    | [x] -> if x <=n then ([x],[]) (* se e' minore di n va in una lista senno' nell'altra *)
             else ([],[x])
    | x :: y :: ys -> let (l1,l2) = split(y :: ys) n
                      in 
                      if x<=n then (x :: l1; l2)
                      else (l1, x :: l2);;  


#let rec quicksort l=
    match l with
    [] -> []
    | [x] -> [x]
    | x :: y :: ys -> let (l1,l2) = split(y :: ys) x
                      in 
                      quicksort l1 @ [x] @ quicksort l2;;


(*
quicksort [2; 3; -1; 4; 0]

=([-1;0],[3;4] = split[3;-1;4;0] 2 

quicksort[-1; 0] @ [2] @ quicksort[3; 4] = [-1; 0; 2; 3; 4]

quicksort[-1;0] = [] @ [-1] @ [0]

quicksort[3;4] = [] @ [3] @ [4]
*)