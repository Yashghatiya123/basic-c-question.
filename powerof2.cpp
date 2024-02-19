#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i;
	int ans = 0;
	int n;
	cin>>n;
	for(i=0;i<30;i++)
	{
		ans = pow(2,i);
		if(ans == n)
		{
			cout<<"true";
		}
		
	}
	
}
