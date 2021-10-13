#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}

int main()
{
	int a = 10, b = 15;
	cout << "GCD(" << a << ", "
		<< b << ") = " << gcd(a, b)
						<< endl;
	a = 35, b = 10;
	cout << "GCD(" << a << ", "
		<< b << ") = " << gcd(a, b)
						<< endl;
	a = 31, b = 2;
	cout << "GCD(" << a << ", "
		<< b << ") = " << gcd(a, b)
						<< endl;
	return 0;
}


///


//extended algorithm
#include <bits/stdc++.h>
using namespace std;

int gcdExtended(int a, int b, int *x, int *y)
{
	if (a == 0)
	{
		*x = 0;
		*y = 1;
		return b;
	}

	int x1, y1; 
	int gcd = gcdExtended(b%a, a, &x1, &y1);
  
	*x = y1 - (b/a) * x1;
	*y = x1;

	return gcd;
}

int main()
{
	int x, y, a = 35, b = 15;
	int g = gcdExtended(a, b, &x, &y);
	cout << "GCD(" << a << ", " << b
		<< ") = " << g << endl;
	return 0;
}
