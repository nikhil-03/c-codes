#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back
#define For(n) for(int i=0;i<n;i++)
#define rFor(n) for(int i=n-1;i>=0;i--)

void solve()
{
   ll n,k; cin>>n>>k;
   V ar(n);
   ll mx=0;
   For(n){cin>>ar[i];  mx=max(mx,ar[i]); } 
   ll ans=INT_MAX;


   for(int i=1;i<=mx;i++)
   {
   	  ll j=0,co=0;
   	  while(j<n)
   	  {
   	  	if(ar[j]==i)j++;
   	  	 else { co++; 
   	  	 j+=k; }
   	  }
   	  ans=min(ans,co);
   }
   cout<<ans;
}

int main() 
{
   int t; cin>>t;
   while(t--)
   {
   	  solve();
   	  cout<<endl;
   }
}
