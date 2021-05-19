#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int fun(int x,int y,vector<int> ar,vector<vector<int>> dp)
{
  if(y-x==1)
  {
    dp[x][y]=max(ar[x],ar[y]);
  }
  if(dp[x][y]==-1)
   {
   	 int c1,c2;
   	 if(ar[y]>ar[x+1])
   	 {
   	 	c1=ar[x]+fun(x+1,y-1,ar,dp);
   	 }else 
   	   { c1=ar[x]+fun(x+2,y,ar,dp);
   	    }

   	  if(ar[x]>ar[y-1])
   	  {
   	  	c2=ar[y]+fun(x+1,y-1,ar,dp);
   	  } 
   	  else
   	  {
   	  	c2=ar[y]+fun(x,y-2,ar,dp);
   	  }

   	  if(c1>c2)dp[x][y]=c1;
   	  else dp[x][y]=c2;
   }

  return dp[x][y];
}
int t=1;
void solve()
{
	while(1)
	{
		int n; cin>>n;
		ll sum=0,ans=0; 
		if(n==0)return;
		vector<int> ar(n+1);
		vector<vector<int>> dp(1005,vector<int>(1005,-1));

		for(int i=0;i<n;i++){cin>>ar[i]; dp[i][i]=ar[i]; sum+=ar[i]; }

		ans=fun(0,n-1,ar,dp);
	     ans = 2*ans-sum;
	    cout<<"In game "<<t++<<", the greedy strategy might lose by as many as "<<ans<<" points." <<endl;
	}
}
// declare dp and array globally
int main() 
{
   solve();
}
