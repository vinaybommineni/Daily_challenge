#include <iostream>
using namespace std;
#define ll long long 
int main() {
    	
	ll int c=0,n,m,a,b,i;
	cin>>n>>m;
	cin>>a;
	for(i=1;i<n;i++)
	{
	    cin>>b;
	    if(b-a==2*m)
	        c++;
	    else if((b-a)>(2*m))
	        c+=2;
	    a=b;
	}
	cout<<c+2;
	return 0;
}
