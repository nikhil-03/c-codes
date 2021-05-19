#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
	int t; cin>>t;
	while(t--)
   {
   int k,n; cin>>k>>n;
   	vector<int> wt(n+1),val(n+1);
   	for(int i=0;i<n;i++)
   	{
   		cin>>wt[i]>>val[i];
   	}
   	int dp[n+1][k+1];
   	for(int i=0;i<=n;i++)
     {
     	for(int j=0;j<=k;j++)
     	{
     		if( i==0 or j==0)dp[i][j]=0;
     		else if(j>=wt[i-1])
     		{
     			dp[i][j]=max(dp[i-1][j], val[i-1]+dp[i-1][j-wt[i-1]]);
     		}
     		else dp[i][j]=dp[i-1][j];
     	}
     }
     cout<<"Hey stupid robber, you can get ";
     cout<<dp[n][k]<<"."<<endl;

  }
}