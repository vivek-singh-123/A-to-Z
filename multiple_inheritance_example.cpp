#include<iostream>
using namespace std;
int a,b,c;
class A
{
	public:
		void input();
		void add();
};
void A :: input()
{
	cout<<"Enter any two numbers:"<<endl;
	cin>>a>>b;
}
void A :: add()
{
	c=a+b;
	cout<<"Addition:"<<c<<endl;
}
class B 
{
	public:
		void sub();
		void mult();
};
void B :: sub()
{
	c=a-b;
	cout<<"Subtraction:"<<c<<endl;
}
void B :: mult()
{
	c=a*b;
	cout<<"Multiplication:"<<c<<endl;
}
class C:public A,public B
{
	public:
	void div();
	void rem();
};
void C :: div()
{
	c=a/b;
	cout<<"Division:"<<c<<endl;
}
void C :: rem()
{
	c=a%b;
	cout<<"Reminder:"<<c<<endl;
}
int main()
{
	C vivek;
	vivek.input();
	vivek.add();
	vivek.sub();
	vivek.mult();
	vivek.div();
	vivek.rem();
	
	return 0;
}
