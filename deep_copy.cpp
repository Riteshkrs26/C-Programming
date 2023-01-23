#include<iostream>
using namespace std;
class Demo
{
    public:
    int a;
    int b;
    int *p;
    Demo()
    {
        p=new int;
    }
    Demo(Demo &d)
    {
        a=d.a;
        b=d.b;
        p=new int;
        *p=*(d.p);
    }
    void showdata()
    {
        std::cout<<"Value of a is: "<<a<<std::endl;
    }
};
int main()
{
    Demo d1;
    d1.setdata(4,5,7);
    Demo d2=d1;
    d2.showdata();
    return 0;
}