#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
  ll t; cin>>t;
  for(int tt=1;tt<=t;tt++)
  {
  	cout<<"Case "<<tt<<": ";
   ll n; cin>>n; bool done=0;
   vector<ll> ar(n,0),dp(n+1,-1);
   if(n==0){ cout<<0<<endl; continue; }


   cin>>dp[1]; if(n==1){cout<<dp[1]<<endl; continue; }


    cin>>dp[2];
   dp[2]=max(dp[1],dp[2]);
    for(ll i=3;i<=n;i++)
  	{
  		ll x; cin>>x;
  		dp[i]=max(x+dp[i-2],dp[i-1]);
    }
    cout<<dp[n]<<endl;
  }
}