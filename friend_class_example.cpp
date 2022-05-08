#include<iostream>
using namespace std;
class A
{
	private:
		int a,b;
		public:
			void input()
			{
			     a=100 , b=20;
			}
			friend class B;
};
class B
{
	int c;
	public:
		void print(A r)
		{
			c=r.a+r.b;
			cout<<c;
		}
};
int main()
{
	A obj;
	obj.input();
	B obj2;
	obj2.print(obj);
	
	return 0;
}
