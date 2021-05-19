#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int> adj[20010];
vector<bool> vis;
vector<int> parent;
int xx=-1;

bool dfs(int v,int par)
{
	vis[v]=1;
	for(int u : adj[v])
	{
		if(u==par)continue;
		if(vis[u])
		{
           xx=u; 
           return 1;
		}
       parent[u]=v;
       if(dfs(u,parent[u]))
       	return 1;
	}
	return 0;
}

int main() 
{
   int m,n;
   cin>>m>>n;
  parent.assign(m+1,-1);
  vis.assign(m+1,0);
   for(int i=0;i<n;i++)
   {
   	int x,y; cin>>x>>y;
   	 adj[x].push_back(y);
   	 adj[y].push_back(x);
   }

   for(int i=1;i<=m;i++)
   	{
       if(!vis[i] && dfs(i,parent[i]))
       	break;
   	}
   	if(xx==-1 and m==n+1)cout<<"YES";
   	else cout<<"NO"<<endl;
}