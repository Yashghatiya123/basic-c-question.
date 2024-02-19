#include<iostream>
using namespace std;
int main()
{
	int i = 1;
	int sum = 0;
	int sum1 = 0;
	do
	{
		if(i%2==0)
		{
			sum = sum+i;
			
		}
		else
		{
			sum1 = sum1+i;
		}
		i++;
	}
	while(i<=100);
		cout<<"sum of even number"<<sum<<endl;
		cout<<"sum of odd number"<<sum1<<endl;
	
}
