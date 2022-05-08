#include<iostream>
using namespace std;
int main()
{
    int num,i,check=0;

    cout<<"Please enter a number:"<<endl;
    cin>>num;
    for(i=1; i<=num; i++)
    {
        if(num%i==0)
        {
            check++;
        }
    }
    if(check==2)
    {
        cout<<"This is a prime number."<<endl;
    }
    else
    {
        cout<<"This is a even number.";
    }
    return 0;
}
