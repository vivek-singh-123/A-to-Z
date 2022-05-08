#include<iostream>
using namespace std;
class demo
{
	private:
		int n1,n2;
		public:
			demo()
			{
				n1=10;
				n2=20;
			}
			void display()
			{
				cout<<n1<<endl;
				cout<<n2;
			}
         };
			int main()
			{
				demo A;
				A.display();
				return 0;
			}	
