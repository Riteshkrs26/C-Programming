#include<iostream>
using namespace std;
class student
{
    string name;
    int reg_no,roll,age;
    public:
    student()
    {
        name="abc";
        reg_no=1;
        roll=12;
        age=123;
    }
    student(string a)
    {
        name=a;
        reg_no=0;
        roll=0;
        age=0;
    }
     student(string b,int c)
    {
        name=b;
        reg_no=c;
        roll=0;
        age=0;
    }
    student(string d,int e,int f)
    {
        name=d;
        reg_no=e;
        roll=f;
        age=0;
    }
    student(string g,int h,int i,int j)
    {
        name=g;
        reg_no=h;
        roll=i;
        age=j;
	}
    void disp()
    {
        cout<<"Details of student:\n";
        cout<<name<<endl;
        cout<<reg_no<<endl;
        cout<<roll<<endl;
        cout<<age<<endl;
    }
};
int main()
{
    student s1;
    student s2("Ritesh");
    student s3("Ritesh",10);
    student s4("Ritesh",10,46);
    student s5("Ritesh",10,46,19);
    s1.disp();
    s2.disp();
    s3.disp();
    s4.disp();
    s5.disp();
}