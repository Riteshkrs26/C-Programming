#include<iostream>
using namespace std;
int main()
{
    void *ptr;
    int a=9;
    ptr=&a;
    std::cout<<&a<<std::endl;
    std::cout<<ptr<<std::endl;
    return 0;
}