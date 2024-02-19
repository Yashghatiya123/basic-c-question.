//power of a function;

#include<iostream>
using namespace std;


void pow(int num,int power)
{
	int ans = 1;
	int i;
	for(i = 1;i<=power;i++)
	{
		ans = ans*num;
	}
	cout<<ans;
}








int main()
{
	pow(4,5);
}
