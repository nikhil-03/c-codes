#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back
#define For(n) for(int i=0;i<n;i++)

void dfs(int s,int parent,int &timer,vector<int> adj[],vector<int> &intime,vector<int> &low,vector<bool> &vis,vector<int> &articulation)
{
   vis[s]=1;
   intime[s]=low[s]=timer++;
   int child=0;
   for(auto a : adj[s])
   {
   	  if(parent==a)continue;
   	  if(!vis[a])
   	  {
   	  	dfs(a,s,timer,adj,intime,low,vis,articulation);
   	  	low[s]=min(low[s],low[a]);
   	  	
   	  	if(low[a]>=intime[s] and parent!=-1)
   	  	{
   	  		articulation[s]=1;
   	  	}
         child++;
   	  }
   	  else 
   	  {
   	  	low[s]=min(low[s],intime[a]);
   	  }
   }
   if(parent==-1 and child>1)
   {
      articulation[s]=1;
   }
   
}

int main() 
{
   int n,m; cin>>m>>n;
   vector<int> adj[m+5];
   for(int i=0;i<n;i++)
   	{
   		int x,y; cin>>x>>y;
   		adj[x].pb(y); //Directed
         adj[y].pb(x); //undirected
   	}
   	vector<int> intime(m+5,-1);
   	vector<int> low(m+5,-1);
   	vector<bool> vis(m+5,0);
      vector<int> articulation(m+5,0);
     int timer=0;
   	for(int i=0;i<n;i++)
   	{
   		if(!vis[i])
   		dfs(i,-1,timer,adj,intime,low,vis,articulation);
   	}
      for(int i=0;i<n;i++)
      {
         if(articulation[i]==1)cout<<i<<" ";
      }
}
