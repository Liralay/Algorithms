def gcd(a, b):
	if a == 0 :
		return b
	
	return gcd(b%a, a)

a = 10
b = 15
print("gcd(", a , "," , b, ") = ", gcd(a, b))

a = 35
b = 10
print("gcd(", a , "," , b, ") = ", gcd(a, b))

a = 31
b = 2
print("gcd(", a , "," , b, ") = ", gcd(a, b))



///


# Extended Algotithm

def gcdExtended(a, b):
	if a == 0 :
		return b, 0, 1
			
	gcd, x1, y1 = gcdExtended(b%a, a)
  
	x = y1 - (b//a) * x1
	y = x1
	
	return gcd, x, y
	
a, b = 35,15
g, x, y = gcdExtended(a, b)
print("gcd(", a , "," , b, ") = ", g)

