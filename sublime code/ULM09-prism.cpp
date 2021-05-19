#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back
#define For(n) for(int i=0;i<n;i++)
#define rFor(n) for(int i=n-1;i>=0;i--)
#define pii pair<int,int> 

int n,m;

void solve()
{
   vector<pii> adj[n+1];
   for(int i=0;i<m;i++)
   {
   	int x,y,z; cin>>x>>y>>z;
   	  adj[x].pb({y,z});
   	  adj[y].pb({x,z});
   }
   int parent[n+1],key[n+1];    bool vis[n+1];
   For(n+1){ key[i]=INT_MAX; vis[i]=0;  }
   priority_queue<pii,vector<pii>,greater<pii>> pq;
   pq.push({0,0});
   while(!pq.empty())
   {
   	  int u=pq.top().second;
   	  pq.pop();
   	  vis[u]=1;
   	  for(auto a : adj[u])
   	  {
   	  	int v=a.first,wt=a.second;
   	  	if(!vis[v] and wt < key[v])
   	  	{
   	  		parent[v]=u;
   	  		pq.push({key[v],v});
   	  		key[v]=wt;
   	  	}
   	  }
   }
   For(n+1)cout<<key[i]<<" ";
   
}

int main() 
{
  while(1)
  {
   cin>>n>>m;
   if(n==0 and m==0)return 0;
   solve();
  }
}
