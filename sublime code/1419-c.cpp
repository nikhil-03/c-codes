#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll fun(vector<ll> &ar,ll n,ll x)
{
	ll s=0,i,tm=0;
   
    for(i=0;i<n;i++){ if(ar[i]==x)tm++; }
      if(tm==n)return 0;
      if(tm>0)return 1;

	for(i=0;i<n;i++){ s+=(ar[i]-x); }
		if(s==0)return 1;

	return 2;
}

int main() 
{
   int t; cin>>t;
   while(t--)
   {
       ll n,x,s=0;  cin>>n>>x;
       vector<ll> ar(n);
       for(ll i=0;i<n;i++){cin>>ar[i]; }
        cout<< fun(ar,n,x)<<endl;	

   }
}