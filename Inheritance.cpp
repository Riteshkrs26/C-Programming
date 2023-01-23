#include<iostream>
using namespace std;
class x
{
    private:
    int a;
    public:
    int b;
    void set()
    {
        a=20;b=30;
    }
    int get_a()
    {
        return a;
    }
    void disp_a()
    {
        cout<<"Value of a is "<<a<<endl;
    }
};
class y:public x
{
    private:
    int c;
    public:
    void mul()
    {
        c=b*get_a();
    }
    void dispresult()
    {
        cout<<"Value of a is "<<get_a()<<endl;
        cout<<"value of b is "<<b<<endl;
        cout<<"Multiplication is "<<c<<endl;
    }
};
int main()
{
    y object;
    object.set();
    object.mul();
    object.dispresult();
    object.disp_a();
    object.b=50;
    cout<<"Updated value of b is "<<object.b<<endl;
    return 0;
}