#include<bits/stdc++.h>
using namespace std ;
#define ll long long
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		ll sum1=0,sum2=0;
		string s1,s2;
		cin>>s1>>s2;
		for(ll i = 0 ; i < s1.size() ; i++ )
		{
			sum1+=(s1[i]-'0');
		}
		for(long long int i = 0 ; i < s2.size() ; i++ )
		{
			sum2+=(s2[i]-'0');
		}
		sum1=sum1*sum2;
		cout<<sum1%3<<endl;
		
	}	
	
	return 0;
}

