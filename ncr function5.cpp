//program to find combination using ncr = n!/r!(n-r)!
#include<iostream>>
using namespace std;

int fact(int n)
{
	if(n==0)
	return 1;
	int fact = 1;
	for (int i = 2; i <= n; i++)
		fact = fact * i;
	return fact;
}

int nCr(int n, int r)
{
	return fact(n) / (fact(r) * fact(n - r));
}

int main()
{
	int n = 5, r = 3;
	cout << nCr(n, r);
	return 0;
}

