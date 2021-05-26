#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back
#define For(n) for(int i=0;i<n;i++)

void dfs(int s,int parent,int &timer,vector<int> adj[],vector<int> &intime,vector<int> &low,vector<bool> &vis)
{
   vis[s]=1;
   intime[s]=low[s]=timer++;

   for(auto a : adj[s])
   {
   	  if(parent==a)continue;
   	  if(!vis[a])
   	  {
   	  	dfs(a,s,timer,adj,intime,low,vis);
   	  	low[s]=min(low[s],low[a]);
   	  	if(low[a]>intime[s])
   	  	{
   	  		cout<<s<<" "<<a<<endl;
   	  	}
   	  }
   	  else 
   	  {
   	  	low[s]=min(low[s],intime[a]);
   	  }
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
     int timer=0;
   	for(int i=0;i<n;i++)
   	{
   		if(!vis[i])
   		dfs(i,-1,timer,adj,intime,low,vis);
   	}
}
