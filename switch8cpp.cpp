#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter the amount";
	cin>>num;
	switch(1)
	{
		case 1:cout<<"100 notes required are"<<num/100<<endl;
		        num = num%100;
		case 2:cout<<"50 notes required are"<<num/50<<endl;
		        num = num%50;
	    case 3 :cout<<"20 notes required are"<<num/20<<endl;
		        num = num%20;
		case 4 :cout<<"10 notes required are"<<num/10<<endl;
		        num = num%10;
	}
}
