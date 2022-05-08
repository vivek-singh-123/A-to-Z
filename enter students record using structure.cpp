#include<iostream>
using namespace std;
struct bc
{
	
	char name[20];
	int rollnumber;
	float height;
	double weight;
	
}s;
int main()
{
	struct bc s={"pritam",156,7,70};
	
	cout<<"Name:"<<s.name<<endl;
	cout<<"Rollnumber:"<<s.rollnumber<<endl;
	cout<<"Height:"<<s.height<<endl;
	cout<<"Weight:"<<s.weight<<endl;
	
	return 0;
}
