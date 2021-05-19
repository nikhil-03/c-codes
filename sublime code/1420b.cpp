#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back
#define For(n) for(int i=0;i<n;i++)
#define rFor(n) for(int i=n-1;i>=0;i--)

V dp(33);

void solve()
{
    // For(10)cout<<dp[i]<<" ";
    M m;
    int n; cin>>n;

    for(int i=0;i<n;i++)
    {
       ll x; cin>>x;
       for(int i=0;i<32;i++)
       {
       	 if(x>=dp[i] and x<dp[i+1])
       	 {
       	 	m[i]++;
       	 }
       }
    }
    ll cnt=0;
    // for(auto a : m)
    // 	cout<<a.first<<" "<<a.second<<endl;

    for(auto a : m)
    {
    	if(a.second>=2)
    	{
    		ll k=a.second-1;
    		cnt=cnt + ( (k*(k+1))/2 );
    	}
    }
    cout<<cnt;
}

int main() 
{
   int t; cin>>t;
   for(int i=0;i<32;i++)
   {
   	  dp[i]=pow(2,i);

   }
   while(t--)
   {
   	  solve();
   	  cout<<endl;
   }
}
