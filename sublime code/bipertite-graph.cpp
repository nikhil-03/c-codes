#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back
#define For(n) for(int i=0;i<n;i++)
vector<int> adj[10000];

bool bfs(int s,vector<int> &color)
{
   color[s]=1;
   queue<int> q;
   q.push(s);
    while(!q.empty())
    {
      int p=q.front();
      q.pop();
       for(auto a : adj[p])
       {
         if(color[a]==-1)
         {
            color[a]=1-color[p];
            q.push(a);
         }
         else if(color[a]==color[p])return 0;
       }
    }
    return 1;
}


int main() 
{
   int n,m; cin>>n>>m;
   for(int i=0;i<n;i++)
   	{
   		int x,y; cin>>x>>y;
   		adj[x].pb(y); //Directed
         adj[y].pb(x);
         // cout<<x<<" "<<y<<endl;
   	}
   	vector<int> color(n+5,-1);
      // memset(color,-1,sizeof(color));
     for(int i=0;i<n;i++)
     {
       if(color[i]==-1)
       {
         if(!bfs(i,color)){cout<<"NO"; return 0;}
         
       }
     }
   cout<<"YES";
}