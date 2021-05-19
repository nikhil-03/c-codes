#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> ar
#define pb push_back

void solve()
{
  int n,m; cin>>n>>m;
     vector<vector<ll>> v(m);
     vector<pair<ll,ll>> pr;
     for(int i=0;i<m;i++)
     {
   	   int N; cin>>N;
   	   for(int j=0;j<N;j++)
   	    {
   	    	ll k; cin>>k;
   	    	v[i].pb(k);
   	    }
   	    pr.pb({N,i});
     }
     sort(pr.begin(),pr.end());
      map<ll,ll> mp;
     vector<ll> ans(m,0);
     ll modu=m%2==0?m/2:m/2+1;

    for(int i=0;i<m;i++)
    {
       for(int j=0;j<pr[i].first;j++)
       {
          ll x=v[pr[i].second][j];
          if(mp[x]<modu)
          {
          	mp[x]++;
          	ans[pr[i].second]=x; break;
          }
       }     	
    }
    for(int i=0;i<m;i++)if(ans[i]==0){cout<<"NO"<<endl; return;}
    	cout<<"YES"<<endl;
    for(auto a : ans)cout<<a<<" "; cout<<endl;	
}

int main() 
{
   int t; cin>>t;
   while(t--)
   {
     solve();  
   }
}