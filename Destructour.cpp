#include<iostream>
using namespace std;
int count=0;
class A1
{
	public:
		A1()
		{
			cout<<"Object"<<ends<<++count<<ends<<"created"<<endl;
		}
		
		~A1()
		{
			cout<<"Object"<<ends<<count--<<ends<<"deleated"<<endl;
		}
	
 };
 int main()
 {
 	A1 bsdk,bsdk2,bsdk3;
 	
 	return 0;
 }
