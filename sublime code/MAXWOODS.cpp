#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
  int n; cin>>n;
  vector<int> ar(n),dp(n+1,1); 
  for(int i=0;i<n;i++)cin>>ar[i];

  for(int i=1;i<n;i++)
  {
  	dp[i]=1;
  	for(int j=0;j<i;j++)
  	{
        if(ar[i]>ar[j] and dp[i]<dp[j]+1)
        {
        	dp[i]=dp[j]+1;
        }
  	}
  } int mx=INT_MIN;
  for(int i=0;i<=n;i++)mx=max(mx,dp[i]);
  cout<<mx;	
}
