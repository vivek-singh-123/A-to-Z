#include<iostream>
using namespace std;
class A
{
	int a,b;
	public:
		void input()
		{
			cout<<"Enter value:";
			cin>>a>>b;
		}
		friend void add(A obj);
};
void add(A obj)
{
	int c;
	c=obj.a+obj.b;
	cout<<"sum="<<c;
}
int main()
{
	class A vivek;
	vivek.input();
	add(vivek);
	
	return 0;
}
