//febonacci series
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the fabonacci length";
	cin>>n;
	int i = 1;
	int a = 0;
	int b = 1;
	cout<<a;
	cout<<b;
	while(i<=n)
	{
		int c = a+b;
		cout<<c;
		a = b;
		b = c;
		i++;
	}
}
