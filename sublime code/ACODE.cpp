#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    while(1)
    {
      string s; cin>>s;
      if(s=="0")return;
      int n=s.size();
      vector<ll>dp(n+1,0);
      dp[0]=1,dp[1]=1;
      for(int i=2;i<=n;i++)
      {
          int a=s[i-1]-48,b=s[i-2]-48;
          if(a!=0)
            {dp[i]=dp[i-1];}

          ll x = (b*10) + a;
          // cout<<x<<" ";
          if(x>=10 and x<=26)
          {  dp[i]+=dp[i-2]; }
      }
      cout<<dp[n];
      // for(auto a : dp)cout<<a<<" ";
       cout<<endl;
    }
}
int main() 
{
   solve();
}
