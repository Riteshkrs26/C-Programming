#include<iostream>
using namespace std;
class Demo
{
    int a;
    int b;
    int *p;
    public:
    Demo()
    {
        p=new int;
    }
    void setdata(int x,int y,int z)
    {
        a=x;
        b=y;
        p=&z;
    }
    void showdata()
    {
        std::cout<<"Value of a is: "<<a<<std::endl;
        std::cout<<"Value of b is: "<<b<<std::endl;
        std::cout<<"Value of *p is: "<<*p<<std::endl;
    }
};
int main()
{
    Demo dl;
    dl.setdata(4,5,7);
    Demo d2=dl;
    d2.showdata();
}