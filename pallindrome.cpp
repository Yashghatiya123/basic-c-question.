//palindrome
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number";
	cin>>n;
	int sum = 0;
	int temp = n;
	while(temp!=0)
	{
		int r = temp%10;
		sum = sum*10+r;
		temp = temp/10;
	}
	if(sum == n)
	{
		cout<<"no is pallindrome";
	}
	else
	{
		cout<<"number is not pallindrome";
	}
}
