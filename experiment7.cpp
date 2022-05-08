#include<iostream>
using namespace std;
class A
{
  public: 
   int x,y;
};
int main()
{
   int A::* p1 = &A::x;
   int A::* p2 = &A::y;
   
    A ob;
   
    ob.*p1 = 10;
    ob.*p2 = 20;

  cout<<"The value of x is: " << ob.*p1<<"\n";
  cout<<"The value ot y is: " << ob.*p2<<"\n"; 
  
  return 0;
}
