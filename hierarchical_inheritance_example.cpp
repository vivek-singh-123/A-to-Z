#include<iostream>
using namespace std;
class animal
{
	public:
		void show()
		{
			cout<<"Animal is eating...!"<<endl;
		}
};
class dog:public animal
{
	public:
		void voice()
		{
			cout<<"bhow bhow..."<<endl;
		}
};
class cat:public animal
{
	public:
		void voice()
		{
			cout<<"meow meow..."<<endl;
		}
};
int main()
{
	dog vivek;
	cat aditya;
	vivek.show(); 
	vivek.voice();
	aditya.show(); 
	aditya.voice();
	
	return 0;
}
