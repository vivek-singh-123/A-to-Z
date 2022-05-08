#include<iostream>
using namespace std;
class marks
{
    	int c,java,phython,tot,ag;
		public:
			void fun()
		    	{
				cout<<"Enter marks of 3 subjects:"<<endl;
				cin>>c>>java>>phython;
				}
				
				void total()
				{
				tot=c+java+phython;
				cout<<"Total marks:"<<tot<<endl;
			    }
			    
			    void avg()
			    {
				ag=tot/3;
				cout<<"Average marks:"<<ag<<endl;
			    }
	
};
int main()
{
	marks vivek;
	vivek.fun();
	vivek.total();
	vivek.avg();
	
	marks rajiv;
	rajiv.fun();
	rajiv.total();
	rajiv.avg();
	
	return 0;
}
