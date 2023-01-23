#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int a;
	    if(n>=k)
	    {
	        a=n-k;
	        while(a>0)
	        {
	           if(a>k)
	           {
	            a=a-k;
	           }
	        }
	        cout<<a<<endl;
	    }
	    else
	    {
	        cout<<n<<endl;
	    }
	}
	return 0;
}

