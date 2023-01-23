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
        cout<<"Enter the value of a =";
        cin>>a;
        cout<<"Enter the value of b =";
        cin>>b;
    }
    int get_a()
    {
        return a;
    }
    void disp_a()
    {
        cout<<a;
    }
};
class y:private x
{
    private:
    int c;
    public:
    void mul()
    {
        set();
        c=b*get_a();
    }
    void dispresult()
    {
        cout<<"Multiplication is "<<c<<endl;
    }
};
int main()
{
    y object;
    object.mul();
    object.dispresult();
    return 0;
}