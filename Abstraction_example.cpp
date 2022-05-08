#include<iostream>
using namespace std;
class mybank
{
	private:
		int ATMPIN,Balence;
		public:
			string Bankname;
			int IFSC;
			
			void input()
			{
				ATMPIN=100001;
				Balence=5000000;
				Bankname="Punjab_National_Bank";
				IFSC=80336;
			}
			void output()
			{
				cout<<"My account details....!"<<endl;
				cout<<ATMPIN<<endl;
				cout<<Balence<<endl;
				cout<<Bankname<<endl;
				cout<<IFSC<<endl;
			}
			
};
int main()
{
	mybank V;
	V.input();
	V.output();
	
	cout<<endl<<"Aditya tring to access my account...!"<<endl;
			    //cout<<V.ATMPIN<<endl;  //Can not access
				//cout<<V.Balence<<endl;  //Can not access
				cout<<V.Bankname<<endl;
				cout<<V.IFSC<<endl;
	
	return 0;
}
