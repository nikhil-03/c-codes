#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back
#define N 10000000000


void solve()
{
    ll n; cin>>n;
    vector<pair<ll,ll>> vp;
    for(ll i=2;i*i<=n;i++)
    {
    	ll cnt=0;
    	while(n%i==0)
    	{
    		cnt++;
    		n=n/i;
    	}
    	if(cnt>0)
    	vp.pb({cnt,i});
    }
    if(n>1){ vp.pb({1,n}); }
    sort(vp.rbegin(),vp.rend());
    vector<ll> ans(vp[0].first , vp[0].second);
   
    for(int i=1;i<vp.size();i++)
    {
    	for(int j=0;j<vp[i].first;j++)
    	{
    		ans.back()*=vp[i].second;
    	}
    }

    cout<<ans.size()<<endl;
    for(auto a : ans)cout<<a<<" "; 
   

      return;
}
int main() 
{
	// sieve();
   int t; cin>>t;
   while(t--)
   {
   	  solve();
   	  cout<<endl;
   }
}
