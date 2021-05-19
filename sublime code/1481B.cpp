#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main() 
{
   int t; cin>>t;
   while(t--)
   {
       ll n,k,mn=0,mx=0;  cin>>n>>k;
       vector<ll> ar(n);
       for(ll i=0;i<n;i++)
       	{  cin>>ar[i]; mn=min(mn,ar[i]); mx=max(mx,ar[i]); }
       	ll i=0;
        if( ((mx-mn)*n)<k ){ cout<<"-1"<<endl; continue; }
       	while(k--)
       	{
       		for(i=0;i<n-1;i++)
       		{
       			if(ar[i+1]>ar[i]){ar[i]++;  break; }
       		}

       	}
       	if(i+1==n)cout<<"-1"<<endl;
       	else cout<<i+1<<endl;
   }
}