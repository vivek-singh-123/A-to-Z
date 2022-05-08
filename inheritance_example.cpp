#include<iostream>
using namespace std;
class Dad
{
	protected:
	int money;
	public:
		void input()
		{
			money=100000;
		}
	
};
class son:public Dad
{
	int amount,total;
	public:
		void show()
		{
			amount=55555;
			cout<<"son amount = "<<amount<<endl;
			cout<<"Dad money = "<<money<<endl;
			total=money+amount;
			cout<<"Total rupee: "<<total;
		}
};
int main()
{
	son vivek;
	vivek.input();
	vivek.show();
	
	return 0;
}
