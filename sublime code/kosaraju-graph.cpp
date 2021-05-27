#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back
#define For(n) for(int i=0;i<n;i++)

stack<int> st;
vector<int> adj[10000];
bool vis[10000];

void topo(int s)
{
   vis[s]=1;
   for(auto a : adj[s])
   {
      if(!vis[a])
         topo(a);
   }
   st.push(s);
}

void dfs(int s,vector<int> adjr[])
{
  cout<<s<<" ";
  vis[s]=1;
  for(auto a: adjr[s])
  {
     if(!vis[a])
      dfs(a,adjr);
  }
   
}

int main() 
{
   int n,m; cin>>n>>m;
   for(int i=0;i<m;i++)
   	{
   		int x,y; cin>>x>>y;
   		adj[x].pb(y); //Directed
   	}
   	
      memset(vis,0,sizeof(vis));
   	for(int i=0;i<n;i++)
   	{
   		if(!vis[i])
   		topo(i);
   	}
      vector<int> adjr[10000];

      for(int i=0;i<n;i++)
      {
         vis[i]=0;
         for(auto a:adj[i])
         {
             adjr[a].push_back(i);
         }
      }
      

      while(!st.empty())
      {
         int node=st.top(); st.pop();
         if(!vis[node])
         {
            cout<<"SSC: ";
            dfs(node,adjr);
            cout<<endl;
         }

      }
}