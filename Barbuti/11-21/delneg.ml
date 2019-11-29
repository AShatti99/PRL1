(* Funzione che cancella tutti gli elementi negativi 

delneg [3; -4; 5] = [3; 5];;
*)

#let rec delneg l=
    if l=[] then []
    else if hd l<0 then delneg(tl l)
    else hd l :: delneg(tl l);;

#delneg [3;-4;5];;
(* -: int list = [3;5] *)

(*

delneg [3; -4; 5];;
={definizione delneg, l=[3;-4;5] }

hd[3;-4;5] :: delneg(tl [3; -4; 5] }
={applico hd e tl}

3 :: delneg ( [-4;5] );;
={definizione delneg, l=[-4; 5] }

3 :: delneg ( [5] );;
={definizione delneg, l=[5] }

3 :: (hd[5] :: delneg(tl [5]));
={applico hd e tl}

3 :: 5 :: delneg[]
={definzione delneg, l=[]}

3 :: 5 :: []
={notazione}

[3;5]

*)


