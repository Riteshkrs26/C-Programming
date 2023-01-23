#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    int marks[10];
    std::cout<<"Enter elements of array"<<std::endl;
    for(int i=0;i<10;i++)
    {
        cin>>marks[i];
    }
    ptr=marks;
    std::cout<<"value of *Ptr is:"<<*ptr<<std::endl;
    std::cout<<"value of *marks is:"<<*marks<<std::endl;
}