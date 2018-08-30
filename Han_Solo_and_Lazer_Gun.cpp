#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
      double a,b,x,y,count=0,n;
	cin>>n>>a>>b;
	set<double>s;
	while(n--)
	{
	    cin>>x>>y;
	    if(a-x!=0)
	    {
	        s.insert((b-y)/(a-x));
	    }
	    else{
	        count=1;
	    }
	}
	cout << s.size()+count << endl;
	return 0;
}
