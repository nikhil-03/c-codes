#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back
#define For(n) for(int i=0;i<n;i++)
const int MAXN = 4e5+5;
ll n,m;
ll id[400005],rnk[400005];
void init()
{
	For(100005){id[i]=i; rnk[i]=0; }
}
ll root(ll x)
{
	while(id[x]!=x)
	{
		id[x]=id[id[x]];
		x=id[x];
	}
	return x;
}
void unon(ll x,ll y)
{
	ll u=root(x),v=root(y);
	if(rnk[u]<rnk[v])id[u]=v;
  else if(rnk[u]>rnk[v])id[v]=u;
  else { id[v]=u; rnk[u]++; }
}
void solve()
{
   cin>>n>>m; init();
   vector< pair< ll, pair<ll, ll> > > adj;
   	for(int i=0;i<m;i++)
   	{
   		ll x,y,wt; cin>>x>>y>>wt;
   		adj.pb({wt,{x,y}}); 
   	}

  
   	sort(adj.rbegin(),adj.rend()); ll ans=0;
    // vector<int> v[100001];
   	ll mn=LLONG_MAX; bool st=0,en=0;
   	for(int i=0;i<m;i++)
   	{
   		int x=adj[i].second.first;
   		int y=adj[i].second.second;
   		if(root(x)!=root(y))
   		{
   			ans+=adj[i].first;
   			unon(x,y); 
        if(root(1)==root(n)){ cout<<adj[i].first; return; }
   		}
   	}
    cout<<"-1"; 
  
   	 

}

int main() 
{
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   int t; cin>>t;
   while(t--)
   {
   	  solve();
   	  cout<<endl;
   }
}
