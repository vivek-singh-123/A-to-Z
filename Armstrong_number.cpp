#include<iostream>
using namespace std;
int main()
{
	int n,c,r,arm=0;
	cout<<"Enter any number:"<<endl;
	cin>>n;
	
	c=n;
	while(n>0)
	{
		r=n%10;
		arm=(r*r*r)+arm;
		n=n/10;
	}
	if(c==arm)
	{
		cout<<"Armstrong number.";
	}
	else
	{
		cout<<"Not armstrong number.";
	}
	
	return 0;
}
