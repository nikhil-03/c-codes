#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{
   int t; cin>>t;
   while(t--)
   {
       ll n;  cin>>n;
       vector<ll> ar(n+10,0),dp(n+10,0);

       for(ll i=0;i<n;i++)cin>>ar[i];
       for(int i=n-1;i>=0;i--)
       {
       	  dp[i]=max( ar[i]+dp[i+2] , max( ar[i]+ar[i+1]+dp[i+4] , ar[i]+ar[i+1]+ar[i+2]+dp[i+6] ) );
       }
       cout<<dp[0]<<endl;
   }
}