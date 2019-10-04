
#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,i;
    string str;
    cin>>a;
    //int k=a;
    map<string,int>m;
    while(a--)
    {
        cin>>str;
        m[str]++;
        if(m[str]==1)
        cout<<"OK"<<endl;
        else
        cout<<str<<m[str]-1<<endl;
    }
    
    
        
	return 0;
}
