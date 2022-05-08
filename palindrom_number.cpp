#include<iostream>
using namespace std;
int main()
{
	int n,c,r,s=0;
	cout<<"Enter any number: "<<endl;
	cin>>n;
	
	c=n;
	while(n>0)
	{
		r=n%10;
		s=r+(s*10);
		n=n/10;
	}
	if(c==s)
	{
		cout<<"This is a palindrom number.";
	}
	else
	{
		cout<<"This is a not palindrom number.";
	}
	
	return 0;
}
