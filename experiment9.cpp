#include <iostream>
using namespace std;
#define max 100
class student
{
    private:
        char  name[30];
        int   rollNo;
        int   total;
        float perc;
    public:
        void getDetails();
        void putDetails();
};
void student::getDetails()
{
    cout << "Enter name: " ;
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter total marks outof 500: ";
    cin >> total;
     
    perc=(float)total/500*100;
}
void student::putDetails(void)
{
    cout << "Name:"<< name <<endl;
	 cout<<"Roll Number:" <<rollNo<<endl;
	  cout<<"Total marks:" <<total<<endl;
	   cout<<"Percentage:" <<perc<<endl;
}
 
int main()
{
    student std[max];     
    int n,i;
     
    cout<<"Enter total number of students: ";
    cin>>n;
     
    for(i=0; i<n; i++)
	{
        cout << "Enter details of student: "<<(i+1)<<endl;
        std[i].getDetails();
    }
    for(i=0; i<n; i++)
	{
        cout <<endl<<"Details of student "<<(i+1)<<endl;
        std[i].putDetails();
    }
     
    return 0;
}
