#include<iostream>
using namespace std;
int main()
{
	int a,b,c=0,ch;
	cout<<"Enter any two numbers:"<<endl;
	cin>>a>>b;
	
	cout<<"Please enter user choice:";
	cin>>ch;
	do
	switch(ch)
	{
		case 1: c=a+b;
		cout<<c;
		break;
		
		case 2: c=a-b;
		cout<<c;
		break;
		
		case 3: c=a*b;
		cout<<c;
		break;
		
		case 4: c=a/b;
		cout<<c;
		break;
		
		case 5: c=a%b;
		cout<<c;
		break;
		
		default:cout<<"Invalid your choice";
	}
	while(ch<=5);
	return 0;
}
