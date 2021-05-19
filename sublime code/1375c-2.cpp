#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back
#define For(n) for(int i=0;i<n;i++)
#define rFor(n) for(int i=n-1;i>=0;i--)

bool isval(int i,int j,int n,int m)
{
  if(i<0 or j<0 or i>=n or j>=m)return 0;
   return 1;
}

int x[4]={0,0 , 1,-1};
int y[4]={1,-1 ,0, 0};

void solve()
{
   int n,m; cin>>n>>m;
   int ar[n][m];
   for(int i=0;i<n;i++)
   {
   	  for(int j=0;j<m;j++)
   	  	{  
   	  		cin>>ar[i][j];
   	  	 }
   }

   int dp[n][m];

   for(int i=0;i<n;i++)
   {
      for(int j=0;j<m;j++)
      {  
          int valid=0;
          for(int k=0;k<4;k++)
          {
               if(isval(i+x[k],j+y[k],n,m))
               {
                  valid++;
               }
          }            
        // cout<<valid<<" ";
       dp[i][j]=valid;
      }
   }
  for(int i=0;i<n;i++)
   {
      for(int j=0;j<m;j++)
      { 
         if(ar[i][j]>dp[i][j])
          {cout<<"NO"<<endl; return;}
      }
    }
  cout<<"YES"<<endl;
    for(int i=0;i<n;i++)
   {
      for(int j=0;j<m;j++)
      { 
         cout<<dp[i][j]<<" ";
      }cout<<endl;
    }

 }



int main() 
{
   int t; cin>>t;
   while(t--)
   {
      solve();
      // cout<<endl;
   }
}
