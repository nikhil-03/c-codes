#include <bits/stdc++.h>
using namespace std;
#define ll int

vector<ll> adj[10000010];
vector<ll> vis(10000010);
vector<ll> p(10000010,-1);

bool bfs(int sol,int node ,int dist)
{
   if(vis[node]!=-1 and vis[node]!=sol)return 0;
   vis[node]=sol;
   if(dist==0)return 1;
   for(int a : adj[node])
   {
   	 p[a]=node;
   	 bool ans = bfs(sol , a ,dist-1);
   	 if(ans==0)return 0;
   }
   return 1;
}

string solve()
{
      ll n,r,m;  cin>>n>>r>>m;
       for(int i=0;i<=n;i++)
       {
       	  adj[i].clear(); vis[i]=-1; p[i]=-1;
       }
       for(int i=0;i<r;i++)
       {
       	  ll x,y; cin>>x>>y;
       	  adj[x].push_back(y);
       	  adj[y].push_back(x);
       }
        bool done=0;
       for(int i=0;i<m;i++)
       {
         ll k,s; cin>>k>>s;
          done=bfs(k,k,s);
          if(!done){ return "No"; }
       } 
      for(int i=1;i<=n;i++)if(vis[i]==-1){ return "No"; }
      return "Yes";
}

int main() 
{
   int t; cin>>t;
   while(t--)
   {
      cout<<solve()<<endl;
   }
}