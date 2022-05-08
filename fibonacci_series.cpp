#include<iostream>
using namespace std;
int main()
{
	int n,a=0,b=1,i,c;
	
	cout<<"Enter number of term..."<<endl;
	cin>>n;
	
	for(i=1; i<=n; i++)
	{
		cout<<a<<ends;
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}
