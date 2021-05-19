#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back
#define For(n) for(int i=0;i<n;i++)
const int MAXN = 4e5+5;
int n,m;
int id[400005],rnk[400005];
void init()
{
	For(400000){id[i]=i; }
}
int root(int x)
{
	while(id[x]!=x)
	{
		id[x]=id[id[x]];
		x=id[x];
	}
	return x;
}
void unon(int x,int y)
{
	int u=root(x),v=root(y);
	id[u]=v;
}
void solve()
{
   cin>>n>>m; init();
   int is[n+1]; int k=0,cnt=0;
   pair<long long, pair<int, int> > adj[MAXN];
   for(int i=0;i<n;i++){ cin>>is[i]; if(is[i]==1) cnt++; }
   	for(int i=0;i<m;i++)
   	{
   		ll x,y,wt; cin>>x>>y>>wt;
   		adj[k]={wt,{x,y}}; 
   		k++;
   	}
   	for(int i=0;i<n;i++)
   	{
   		if(is[i]) adj[k++]={0,{i+1,0}};
   	}
   	sort(adj,adj+m+cnt); ll ans=0;
   	
   	for(int i=0;i<m+cnt;i++)
   	{
   		int x=adj[i].second.first;
   		int y=adj[i].second.second;
   		if(root(x)!=root(y))
   		{
   			ans+=adj[i].first;
   			unon(x,y); 
   		}
   	}
    set<int> roots; int flag=0;
    roots.clear();
    for(int i=0;i<n;i++)if(is[i])roots.insert(root(i+1));
    
    for(int i=0;i<n;i++)
    {
    	if(!is[i])
    	{
    		int rootemp=root(i+1);
    		if(roots.find(rootemp)==roots.end())
    		{
    			flag=1; 
    			cout<<"impossible";
    			break;
    		}
    	}
    }
    if(flag==0)cout<< ans;



   	// for(int i=1;i<=n;i++)if(vis[i]==0){cout<<"impossible"; return; }
   	 

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
