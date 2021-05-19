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
   ll n; cin>>n;
   ll mx=INT_MIN;
   V ar(n+1); For(n){cin>>ar[i]; }
   ar[n]=10e9+5;

  ll ans=0;
  for(int i=0;i<n;i++)
  {
  	if(ar[i+1]<ar[i])
  	  ans+=(ar[i]-ar[i+1]);
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
