#include<iostream>
using namespace std;
class A
{
	protected:
		int a,b;
		public:
			void input()
			{
				cout<<"Enter any two numbers:"<<endl;
				cin>>a>>b;
			}
};
class B: public A
{
	int c;
	public:
		void add()
		{
			c=a+b;
			cout<<"Addition="<<c<<endl;
		}
		void sub()
		{
			c=a-b;
			cout<<"Subtraction="<<c<<endl;
		}
};
class C: public B
{
	int c;
	public:
		void mult()
		{
			c=a*b;
			cout<<"Multiplication="<<c<<endl;
		}
		void div()
		{
			c=a/b;
			cout<<"Division="<<c<<endl;
		}
		void rim()
		{
			c=a%b;
			cout<<"Rimender="<<c<<endl;
		}
};
int main()
{
	C vivek;
	vivek.input();
	vivek.add();
	vivek.sub();
	vivek.mult();
	vivek.div();
	vivek.rim();
	
	return 0;
}