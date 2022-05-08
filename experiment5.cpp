#include<iostream>
using namespace std;
struct student
	{
		int subject1;
        int subject2;
		int subject3;		
	};
int main()
{	
	int i,n,total;
	float avg;
	struct student st[20];
	cout<<"\n Enter the number of students:";
	cin>>n;
	for(i=0; i<n; i++)
	{
		cout<<"\n Enter marks of 3 subjects of"<<i+1<<"student:";
		cin>>st[i].subject1>>st[i].subject2>>st[i].subject3;
	    total=0;
		total=st[i].subject1+st[i].subject2+st[i].subject3;
		avg=(float) total/3;
		cout<<"\n Average marks of "<<i+1<<" student is ="<<avg;
	}
	return 0;
}
