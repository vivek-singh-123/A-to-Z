#include<iostream>
#include<string>
using namespace std;
    class student{
        string name;
        int rollno;
        int marks[5];
        int totalmarks=0;
        public:
        void input(string nm,int rn,int m[5])
		{
            name=nm;
            rollno=rn;
            for(int i=0;i<5;i++){
                marks[i]=m[i];
            }
        }
        void process(){
            for(int i=0;i<5;i++){
                totalmarks=totalmarks + marks[i];
            }
        }
        void output(){
            cout<<"name= "<<name<<", roll number= "<<rollno<<", total marks "<<totalmarks<<endl;
        }

    };
    int main()
	{
        string name="backbencher";
        int rollno=21;
        int marks[5]={2,7,9,5,6};
        student s1;
        s1.input(name,rollno,marks);
        s1.process();
        s1.output();
    return 0;
}
