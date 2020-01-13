(* Data una lista mi deve restituire il massimo e il minimo *)

#let rec minMax l=
    match l with
    [x] -> (x,x)
    | x :: y :: ys -> let(p,g) = minMax (y::ys)
                      in
                      if x>g then (p,x)
                      else if x<p then (x,g)
                      else (p,g);;