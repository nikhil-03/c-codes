#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define For(n) for(int i=0;i<n;i++)
#define pii pair<int,ll>

void solve()
{
   int n,m,k,s,t; cin>>n>>m>>k>>s>>t;
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
   For(n+4){ dist[i]=100000; vis[i]=0; dist2[i]=100000; }
   dist[s]=0; dist2[t]=0;
   priority_queue<pii , vector<pii> ,greater<pii> > pq;
   pq.push({0,s});
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
   pq.push({0,t});
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

   // for(int i=1;i<=n;i++)cout<<dist[i]<<" "; cout<<endl;
   //  for(int i=1;i<=n;i++)cout<<dist2[i]<<" ";
    ll ans=10e9;

      for(int i=0;i<k;i++)
      {
         int u,v,d;
         cin>> u >> v >> d ;
         ans=min(dist[t], min(ans, d+min(dist[u]+dist2[v], dist[v]+dist2[u]))) ;
      }
    cout<<ans;  
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
