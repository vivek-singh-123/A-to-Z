#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,r1,r2,d;
	cout<<"Enter any three values:"<<endl;
	cin>>a>>b>>c;
	
	d=b*b-4*a*c;
	if(d==0)
	{
		cout<<"roots are real & equal";
		r1= -b/(2*a);
		r2= -b/(2*a);
		
		cout<<r1<<r2;	
	}
	else 
	if(d>0)
	{
		cout<<"roots are real & different";
		r1=(-b+sqrt(d))/(2*a);
		r2=(-b-sqrt(d))/(2*a);
		
		cout<<r1;
	    cout<<r2;
	}
	 else
	 {
	 	cout<<"root are imaginary";
	 }
	 return 0; 
 }
