#include <bits/stdc++.h>
using namespace std;
#define ll long long int


ll fun(ll a,ll b,ll m)
{
	ll res=1;
	while(b)
	{
		if(b&1)res=(res%m*a%m)%m;
		a=(a%m*a%m)%m;
		b=b>>1;
	}
	return res;
}

int main() 
{
   ll n; cin>>n;
   ll m=1000000007;
   cout<<fun(2,n,m);
}