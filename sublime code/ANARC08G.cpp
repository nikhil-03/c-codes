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



void solve(ll n)
{
   ll ar[n][n]; ll sum=0,fs=0;
   ll dp[n]={0};
   for(int i=0;i<n;i++)
   {
   	for(int j=0;j<n;j++)
   	{
   		ll x; cin>>x;
   		// cin>>x;
   		dp[i]=dp[i]-x;
   		dp[j]+=x;
   		sum+=x;
   	}
   	// for(auto at : dp)cout<<at<<" "; cout<<endl;
   }
  
   for(int i=0;i<n;i++)
   {
     if(dp[i]>0)fs+=dp[i];
   }

  cout<<sum<<" "<<fs; 
   
}

int main() 
{
   int k=1;
   while(1)
   {
   	  ll n; cin>>n;
   	  if(n==0)return 0;
   	  cout<<k++<<". ";
   	  solve(n);
   	  cout<<endl;
   }
}
