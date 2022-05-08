#include<iostream>
using namespace std;
int main()
{
	int n,i,sum=0;
	
	cout<<"Enter any number: "<<endl;
	cin>>n;
	
	for(i=1; i<n; i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
	{
		cout<<"Perfect_number";
	}
	else
	{
	    cout<<"Not perfect_number";
	}
}
