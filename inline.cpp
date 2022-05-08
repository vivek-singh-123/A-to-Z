#include<iostream>
using namespace std;

class ab{
    int a;
    char b;
    public:
    inline void num(){
        cout<<"Enter the Number : ";
        cin>>a;
        cout<<a<<endl;
    }
    inline void fun(){
        cout<<"Enter the Character : ";
        cin>>b;
        cout<<b<<endl;
    }

};

int main(){
    ab vivek;
    vivek.num();
    vivek.fun();
    return 0;
}
