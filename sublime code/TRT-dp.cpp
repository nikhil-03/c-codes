#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int n;
vector<ll> ar(2005);
ll dp[2005][2005];
int fun(int l,int r)
{
  int age=(l-1)+(n-r)+1;
	 if(l==r)
   {
      return dp[l][r]= age * ar[l];
   }
   if(dp[l][r]!=-1)
    {
      return dp[l][r];
    }
     int c1 = age * ar[l] + fun(l+1,r);
     int c2 = age * ar[r] + fun(l,r-1);
     return dp[l][r] = max(c1,c2);
}

int main() 
{
    cin>>n;
   for(int i=1;i<=n;i++)cin>>ar[i];

    memset(dp,-1,sizeof(dp));

   cout<<fun(1,n)<<endl;
   
}


