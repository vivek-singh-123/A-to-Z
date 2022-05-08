#include<iostream>
using namespace std;
class Aditya
class Vivek
{
	private:
		int a=10;
		public:
			void bc()
			{
				cout<<a;
			}
			friend void sajwan(Vivek r,Aditya r2);
};
class Aditya
{
	private:
		int b=10;
		public:
			void mc()
			{
				cout<<b;
			}
			friend void sajwan(Vivek r,Aditya r2);
};
void sajwan(Vivek r,Aditya r2)
{
	int c;
	c=r.a()+r2.b();
	cout<<c;
}
int main()
{
	Vivek x;
	x.bc();
	Aditya y;
	y.mc();
	sajwan(r,r2);
	
	return 0;
}
