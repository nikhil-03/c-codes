#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back
#define For(n) for(int i=0;i<n;i++)
#define rFor(n) for(int i=n-1;i>=0;i--)

void solve()
{
    ll n; long double k; cin>>n>>k;
    V x,y,z;

    // cout<<k/2;
    For(n)
    {
    	ll xx; cin>>xx;
    	if(xx<k/2)x.pb(i);
    	else if(xx==k/2)y.pb(i);
    	else z.pb(i);
    }
    V ans(n,0);
    For(z.size())
    {
       ans[z[i]]=1;
    }
    for(int i=0;i<y.size()/2;i++)
    	ans[y[i]]=0;
    for(int i=y.size()/2;i<y.size();i++)
    	ans[y[i]]=1;

    For(n)cout<<ans[i]<<" ";
   
}

int main() 
{
   int t; cin>>t;
   while(t--)
   {
   	  solve();
   	  cout<<endl;
   }
}
