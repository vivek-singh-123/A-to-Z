#include<iostream>
using namespace std;
int main()
{
	int n,i,count=0;
	cout<<"Enter any number:"<<endl;
	cin>>n;
	
	for(i=2; i<=n; i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		cout<<"Prime number.";
	}
	else
	{
		cout<<"Not prime number.";
	}
	return 0;
}
