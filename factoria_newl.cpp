#include<iostream>
using namespace std;
int fact(int);
int main()
{
	int n,f;
	cout<<"Enter any number for finding factorial: "<<endl;
	cin>>n;
	
	f=fact(n);
	cout<<"Factorial is "<<n<<" = "<<f<<endl;
}
int fact(int n)
{
	if(n==0)
	return 1;
	else
		return (n*fact(n-1));
	return 0;
}
