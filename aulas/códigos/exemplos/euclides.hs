mdc :: Integer -> Integer -> Integer

mdc a b
	| a<b = mdc b a
	| (b==0) = a
	| otherwise = mdc b (a `mod` b)