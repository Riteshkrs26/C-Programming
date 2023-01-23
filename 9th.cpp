#include<iostream>
using namespace std;
int main()
{
    int num,i=1;
    cout<<"Enter the range to find all even & odd number in between range: ";
    cin>>num;
    cout<<"\nAll even numbers: \n";
    while(i<=num)
    {
        if(i%2==0)
        {
            cout<<i<<",";
        }
     i++;
    }
    i=1;
    cout<<"\nAll odd numbers: \n";
    while(i<=num)
    {
        if(i%2!=0)
        {
            cout<<i<<",";
        }
     i++;
    }
 return 0;
}