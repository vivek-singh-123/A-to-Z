#include <iostream>
using namespace std;

int main()
{
     float employee[100];
     int numEmployee;
     float totalSalary=0;
     cout<< "Enter the number of employee in the department "<<endl;
     cin>> numEmployee;
     for (int i=0; i<numEmployee; i++)
     {
          cout<< "Enter the salary of " << i + 1 << " employee "<<endl;
          cin>> employee[i];
     }
     for (int i=0; i<numEmployee; i++)
     {
          totalSalary= (employee[i] * 0.5) + (employee[i] * 0.2) + employee[i];
     }
     cout<< "The total salary of " <<numEmployee<<" employee in the department is " <<totalSalary<<endl;
     return 0;
}
