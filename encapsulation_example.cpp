#include<iostream>
using namespace std;
class thief
{
	private:
		string name,address;
		int mobile_number;
		
		public:
			void input()
			{
				name="Lalit_Sharma";
				address="Galgotias_University";
				mobile_number=9006485;
			}
			
			void outut()
			{
				cout<<name<<endl;
				cout<<address<<endl;
				cout<<mobile_number<<endl;
			}
			
};
class police:public thief
{
	public:
		void extra()
		{
			cout<<"mission_sucessful......!"<<endl;
		}
};
int main()
{	
	police V;
	V.input();
	V.outut();
	V.extra();
	
	return 0;
	
}
