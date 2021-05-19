#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int n,m;
int solve(string &s1,string &s2,int i,int j,vector<vector<int>> &dp)
{
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0)dp[i][j]=j;
            else if(j==0)dp[i][j]=i;
            else if(s1[i-1]==s2[j-1])
                { dp[i][j]=dp[i-1][j-1]; }
            else if(s1[i-1]!=s2[j-1])
            {
                dp[i][j]=1+min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
            }
        }
    }
    return dp[m][n];
}


int main() 
{
  int t; cin>>t;
  while(t--)
  {
  string s1,s2;
  cin>>s1>>s2;
    n=s1.size(),m=s2.size();
   vector<vector<int>> dp(2001,vector<int>(2001,0));

    cout<<solve(s1,s2,n,m,dp)<<endl;
  }
}