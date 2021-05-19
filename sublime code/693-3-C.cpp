#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back

void solve()
{
  int n; cin>>n;
  V ar(n+1),dp(n+1); for(int i=1;i<=n;i++)cin>>ar[i];
  for(int i=n;i>0;i--)
  {
  	if(ar[i]+i>n)
  	{
  		dp[i]=ar[i];
  	}
  	else
  	{
  		// cout<<dp[ar[i]+i]<<" "<<i<<endl;
  		dp[i]=dp[ar[i]+i]+ar[i];
  	}
  }
  ll ans=0;
  for(int i=1;i<=n;i++)ans=max(ans,dp[i]);
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