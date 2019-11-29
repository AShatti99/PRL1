(* 
PATTERN: espressione che contiene variabili. Le variabili possono essere instanziate a valori con tipo
corretto. Un pattern non puo' contenere una variabile piu' di una volta.

PATTERN MATCHING: significa instanziare le variabili di un pattern per uguagliarlo a una espressione

pattern x :: xs
sono due nomi qualsiasi, si scrive xs per ricordare che xs si uguaglia a una lista (perche' e' il secondo
operatore di un cons), x invece e' un singolo elemento 

x :: xs si puo' uguagliare a tutte le liste (basta che il primo elemento si uguaglia a x e il resto a xs)
escluso la lista vuota 

I pattern si usano nelle espressioni match:

#match espres with
    pattern1 -> espres1
   |pattern2 -> espres2

"espres" si cerca di uguagliarla ai pattern in sequenza. Quando si riesce ad uguagliarla a un pattern,
il risultato dell'intera espressione e' il valore dell'espressione dopo la freccia
*)

#match [3;4] with
    [] -> 0
    | x :: xs -> 1;;

(* -: int = 1 *)

(* 
si prende la lista [3;4] e si cerca di uguagliarla alla lista vuota... non si puo',
allora si cerca di uguagliarla al secondo pattern, qui si puo': x=3 e xs= 4 :: [] 
*)

#match [3;4] with 
    [] -> 0
    | x :: xs -> x;;

(* -: int = 3 *)

(*
il risultato puo' contenere delle variabili del pattern come in questo caso
x=3 e xs= 4 :: [] 
*)

#match [3;4] with
    [] -> 0
    | x :: xs -> xs;;

(* ERRORE DI TIPO perche' i tipi dei risultati dopo le varie -> devono essere dello stesso tipo
non e' possibile che se la lista e' vuota mi da come espressione un intero, invece se la lista non e' vuota
mi da come risultato una lista *)

(*
x :: [] = [x] si uguaglia a liste lunghe uno

x :: y :: [] = x :: [y] = [x;y] si uguagliano solamente a liste lunghe due

x :: xs si uguagliano a liste non vuote

x :: y :: ys si uguaglia a liste di almeno due elementi*)