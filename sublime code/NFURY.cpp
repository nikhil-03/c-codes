#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int dp[1001];

void solve()
{
   dp[0]=0,dp[1]=1;dp[2]=2;
   for(int i=3;i<1001;i++)
   {
   	  dp[i]=i;
   	  int k=sqrt(i);
   	  for(int j=0;j<=k;j++)
   	  {
   	  	dp[i]=min(dp[i],1+dp[i-j*j]);
   	  }
   }
}


int main() 
{
   int t; cin>>t;
   solve();
   while(t--)
   {
   	int q;
   	cin>>q;
   	cout<<dp[q]<<endl;
   }
}