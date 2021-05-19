#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define For(n) for(int i=0;i<n;i++)
#define pii pair<int,ll>

void solve(int s)
{
   int n,m; cin>>n>>m;
   vector<pii> adj[n+20];// increase it
   vector<pii> adj2[n+20];
   for(int i=0;i<m;i++)
   {
   	  int x,y; ll wt;
   	  cin>>x>>y>>wt;
      adj[x].pb({ y , wt });
      adj2[y].pb({x , wt });

   }
   ll dist[n+5],dist2[n+5]; bool vis[n+5];
   For(n+4){ dist[i]=10e9; vis[i]=0; dist2[i]=10e9; }
   dist[s]=0; dist2[s]=0;
   priority_queue<pii , vector<pii> ,greater<pii> > pq;
   pq.push({0,1});
   while(!pq.empty())
   {
   	   ll prev=pq.top().second;
   	   pq.pop();
   	   if(!vis[prev])vis[prev]=1;
   	   else continue;
   	   for(auto a : adj[prev])
   	   {
   	   	  int nx=a.first,ntw=a.second;
   	   	  if(dist[prev]+ntw<dist[nx])
   	   	  {
   	   	  	 dist[nx]=dist[prev]+ntw;
   	   	  	 pq.push({dist[nx],nx});
   	   	  }
   	   }
   }
   pq.push({0,1});
   while(!pq.empty())
   {
   	   ll prev=pq.top().second;
   	   pq.pop();
   	   for(auto a : adj2[prev])
   	   {
   	   	  int nx=a.first,ntw=a.second;
   	   	  if(dist2[prev]+ntw<dist2[nx])
   	   	  {
   	   	  	 dist2[nx]=dist2[prev]+ntw;
   	   	  	 pq.push({dist2[nx],nx});
   	   	  }
   	   }
   }
ll ans=0;
   // for(int i=1;i<=n;i++)cout<<dist[i]<<" "; cout<<endl;
    for(int i=1;i<=n;i++)//cout<<dist2[i]<<" ";
    {
    	ans=ans+dist2[i]+dist[i];
    }
    cout<<ans;
}

int main() 
{
   int t; cin>>t;
   while(t--)
   {
   	  solve(1);
   	  cout<<endl;
   }
}
