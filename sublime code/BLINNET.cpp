#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll>
#define pb push_back
#define For(n) for(int i=0;i<n;i++)
#define pii pair<int,int>

int n;
int dist[60000]; bool vis[50005];
vector<pii> adj[50001];

int solve(int s)
{ 
   priority_queue< pii, vector<pii>, greater<pii> > pq;
   pq.push({0,s});
   
   for(int i=0;i<=n;i++) { dist[i]=INT_MAX; vis[i]=0; }
   dist[s]=0;

      while(!pq.empty())
      {
         int src=pq.top().second;
         pq.pop();
         if(!vis[src])vis[src]=1;
         else continue;
          for(auto a : adj[src])
          {
             ll next=a.first,nextwt=a.second;
             if(dist[src] + nextwt < dist[next])
             {
               dist[next]=dist[src] + nextwt;
               pq.push({dist[next] , next});
             }
          }
      }
      int mx=0,idx=0;
       for(int i=1;i<=n;i++){ if(dist[i]>mx){mx=dist[i] ; idx=i; } }
      return idx;
}

int main() 
{
   int t; cin>>t;
   while(t--)
   {
      cin>>n;
      For(n+1)adj[i].clear();
      for(int i=0;i<n-1;i++)
      {
        int x,y,w; cin>>x>>y>>w;
        adj[x].pb({y,w});
        adj[y].pb({x,w});
      }
        
        int ind=solve(1);
        // cout<<ind<<endl;
        // cout<<solve(ind);
        cout<<dist[solve(ind)]<<endl;
   }
}
