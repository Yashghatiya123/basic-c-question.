#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	if((a>b)&&(a>c))
	{
		cout<<"a is greater";
	}
	else if((b>a)&&(b>c))
	{
		cout<<"b is greater";
	}
	else
	{
		cout<<"c is greater";
	}
	return 0;
}
