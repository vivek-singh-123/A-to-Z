#include<iostream>
using namespace std;
class vivek
{
	private:
		string tv;
		public:
			void show()
			{
				tv="Tarak Mehta Ka Ulta Chashma";
			}
			friend void Aditya(vivek r);
};
void Aditya(vivek r)
{
	cout<<"Aditya watching "<<r.tv;
}
int main()
{
	vivek a;
	a.show();
	Aditya(a);
	return 0;
}
