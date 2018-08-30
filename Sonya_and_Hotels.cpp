#include <iostream>
using namespace std;

int main() {
    long long int c=0,n,m,a,b,i;
	cin>>n>>m;
	cin>>a;
	for(i=1;i<n;i++)
	{
	    cin>>b;
	    if(b-a==2*m)
	    {
	        c=c+1;
	    }
	    else if(b-a>(2*m))
	    {
	        c=c+2;
	       
	    }
	    a=b;
	}
	c=c+2;
	cout<<c;
	return 0;
}
