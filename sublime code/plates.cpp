#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll ar[51][31]; ll n,k,p;
ll dp[51][1501];
int fun(int i,int p)
{
	if(i>n or p<1)return 0;
    if(dp[i][p]!=-1)return dp[i][p];
	ll ans=0;
	for(int j=0;j<=k;j++)
	{
		if(p<j)break;
		ans=max(ans , ar[i][j] + fun(i+1 , p-j));
	}
	return dp[i][p] = ans;
}

int main() 
{
   int t; cin>>t; int cnt=1;
   while(t--)
   {
         cin>>n>>k>>p; 
       memset(ar,0,sizeof(ar));
       memset(dp,-1,sizeof(dp));
       for(int i=1;i<=n;i++)
       {
       	for(int j=1;j<=k;j++)
       	{
       		int x; cin>>x;
       		ar[i][j]= x + ar[i][j-1];
       	}
       } 
       cout<< "Case #"<<cnt++<<": "<<  fun(1,p)<<endl;	
   }
}