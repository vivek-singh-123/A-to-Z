//single inheritance

#include<iostream>
using namespace std;
class base
{
	public:
		void abc()
		{
			cout<<"single type inheritance"<<endl;
		}
};
class derived:public base
{
	public:
		void ac()
		{
			cout<<"c++";
		}
};
int main()
{
   derived vivek;
   vivek.abc();
   vivek.ac();	
   
   return 0;
}
