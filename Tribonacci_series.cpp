#include<iostream>
using namespace std;
int main()
{
	int n,a=0,b=1,c=2,i,d;
	
	cout<<"Enter term..."<<endl;
	cin>>n;
	
	for(i=1; i<=n; i++)
	{
		cout<<a<<ends;
		d=a+b+c;
		a=b;
		b=c;
		c=d;
	}
	return 0;
}
