#include<iostream>
using namespace std;
int main()
{
    int i=1,ll,ul,a,b=0;
    cout<<"Enter any range with ll & ul to find all prime number btw them:\n";
    cin>>ll;
    cin>>ul;
    i=ll;
    cout<<"Prime numbers\n";
    do
    {
        for(a=1;a<=i;a++)
        {
            if(i%a==0)
            {
              b++;
            }
        }
        if(b<=2)
        {
            cout<<i<<",";
        }
        b=0;
        i++;
    } while (i<=ul);
    return 0;
}