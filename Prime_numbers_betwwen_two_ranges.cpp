#include<iostream>
using namespace std;
int main()
{
	int num1,num2,i,j;
	cout<<"Enter ranges:"<<endl;
	cin>>num1>>num2;
	for(i=num1; i<=num2; i++)
	{
		for(j=2; j<=i; j++)
		{
			if(i%j==0)
			break;
		}
		if(i==j)
		cout<<j<<ends;
	}
	return 0;
}
