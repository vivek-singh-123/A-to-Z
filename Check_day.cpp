#include<iostream>
using namespace std;

int main()
{
	int ch;
	cout<<"Enter user choice: ";
	cin>>ch;
	switch(ch)
	{
		case 1:cout<<"Sunday";
		break; 
		
		case 2:cout<<"Monday";
		break;
		
		case 3:cout<<"Tuesday";
		break;
		
		case 4:cout<<"Wednesday";
		break;
		
		case 5:cout<<"Thrusday";
		break;
		
		case 6:cout<<"Friday";
		break;
		
		case 7:cout<<"Saturday";
		break;
		
		default:cout<<"Invalid Choice";
	}
	return 0;
}
