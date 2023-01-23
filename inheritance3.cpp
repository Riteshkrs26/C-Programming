#include<iostream>
using namespace std;
class student
{
    protected:
    string name;
    int roll;
    int reg;
    public:
    void set()
    {
        cout<<"Enter your name ";
        cin>>name;
        cout<<"roll no ";
        cin>>roll;
        cout<<"registration no ";
        cin>>reg;
    }
};
class test:protected student
{
    protected:
    int dsa;
    int cpp;
    int tech_writing;
    int math;
    int aec;
    public:
    void get()
    {
        set();
        cout<<"\n Enter marks of dsa ";
        cin>>dsa;
        cout<<"\n marks of cpp ";
        cin>>cpp;
        cout<<"\n marks of tech_writing ";
        cin>>tech_writing;
        cout<<"\n marks of math ";
        cin>>math;
        cout<<"\n marks of analog ";
        cin>>aec;
    }
};
class result:protected test
{
    protected:
    int result;
    public:
    void dispresult()
    {
        get();
        result=dsa+cpp+tech_writing+math+aec;
        cout<<"Your result is "<<result<<endl;
        cout<<"% of marks is ="<<(result*100)/500;
    }
};
int main()
{
    result s1;
    s1.dispresult();
    return 0;
}