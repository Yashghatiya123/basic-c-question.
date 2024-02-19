//program to print prime number
#include<iostream>
using namespace std;

int prime(int num)
{
	int x;
    int i;
	for(i = 2;i<num-1;i++)
	{
		if(num%i==0)
		{
			return 0;
		}
    }
	return  1;
   
}







int main()
{
	int n = 4;
	int x = prime(n);
	if (x == 1)
	{
		cout<<"no is  prime";
	}
	else
	{
		cout<<"number is not  prime";
	}
}
