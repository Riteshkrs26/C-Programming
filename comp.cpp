#include<iostream>
using namespace std;
class Number
{
  int a,b;
  public:
    Number()
    {
  	    a=0;
  	    b=0;
	}	
	Number(int x,int y)
	{
		a=x;
		b=y;
	}
	Number(Number &ref)
	{
		a=ref.a;
		b=ref.b;
	}
	void disp()
	{
		if(a>b)
		{
		    cout<<a<<" is greater than "<<b<<endl;
		}
		else if(a<b)
		{
		    cout<<b<<" is greater than "<<a<<endl;
		}
		else
		{
			cout<<a<<" is equal to "<<b<<endl;
		}
	}
};
int main()
{
	Number n1;
	Number n2(6,3);
	Number n3(n2);
	n1.disp();
	n2.disp();
	n3.disp();
	return 0;
}
