#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back
#define For(n) for(int i=0;i<n;i++)
#define rFor(n) for(int i=n-1;i>=0;i--)

int X[8]={ 1 ,-1, 0 , 0 , 1, 1 , -1 ,-1 };
int Y[8]={ 0 ,0 , 1 ,-1 , 1,-1 , -1 , 1 };

bool check(ll i,ll j,ll n,ll m)
{	if(i<0 or j<0 or i>=n or j>=m)return 0;
	return 1; }



void solve()
{
   int n; cin>>n;
   int dp[n][n];
   V ar(n); For(n)cin>>ar[i];
   for(int i=0;i<n;i++)
   {
   	  int k=0;
   	  for(int j=0;j<n;j++)
   	  {
         if(ar[j]>i)
         {
         	dp[i+k][k]=ar[j]; k++; 
         }
   	  }
   }
   for(int i=0;i<n;i++){
   	for(int j=0;j<=i;j++){
      cout<<dp[i][j]<<" "; }
       cout<<endl; }
   
}

int main() 
{
   int t=1;
   while(t--)
   {
   	  solve();
   	  cout<<endl;
   }
}
