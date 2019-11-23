(* La lista e' una sequenza dinamica di elementi dello stesso tipo *)

#[-2; 3; 10; -5];;
(* -: int list = [-2; -3; 10; -5] *)

#[];;
(* -: 'a list=[] *)

#[3; 3,5];; 
(* ERRORE DI TIPO *)



(* Sulle liste e' definito un operatore di base: cons si indica con :: *)

#3 :: [4; 5];;
(* -: int list = [3; 4; 5] *)

#3 :: 4 :: [5];;
(* -: int list = [3; 4; 5] *)

#3 :: 4 :: 5 :: [];;
(* -: int list = [3; 4; 5] *)

#3 :: 4 :: 5;;
(* ERRORE DI TIPO *)



(* Esempi di altre liste: *)

#(3,5) :: [];;
(* -: (int * int) list = [3,5] *)

#(3,5) :: (4,6) :: [];;
(* -: (int * int) list = [3, 5; 4, 6] *)

#(3,"ab") :: [];;
(* -: (int * string) list = [3, "ab"] *)

#[3;5] :: [];;
(* -: int list list = [[3; 5]] *)

#[3;5] :: [5] :: [];
(* -: int list list = [[3; 5]; [5] *)

#[3;5] :: [5];;
(* ERRORE DI TIPO *)


