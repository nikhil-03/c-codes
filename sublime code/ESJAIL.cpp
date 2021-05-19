#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back
#define For(n) for(int i=0;i<n;i++)
#define rFor(n) for(int i=n-1;i>=0;i--)

int X[8]={ 1 ,-1, 0 , 0 , 1, 1 , -1 ,-1 };
int Y[8]={ 0 ,0 , 1 ,-1 , 1,-1 , -1 , 1 };

bool vis[100005],visited[100005];
vector<int> adj[100005];
int n,k,m,x,y;
vector<int> mp(100005,0);

bool check(ll i,ll j,ll n,ll m)
{	if(i<0 or j<0 or i>=n or j>=m)return 0;
	return 1; }

bool bfs(int s)
{
   queue<int> q,p;
   q.push(s);
   visited[s]=1;
   while(!q.empty())
   {
   	 while(!q.empty())
   	 {
   	 	s=q.front(); q.pop();
   	 	for(auto a : adj[s])
   	 	{
   	 		if(!visited[a])
   	 		{
   	 			if(!vis[a])
   	 			{
   	 				visited[a]=1;
   	 				continue;
   	 			}
   	 			if(a==n)return 1;
   	 			if(mp[a] and !vis[mp[a]])
   	 			{
   	 				p.push(mp[a]);
   	 				vis[mp[a]]=1;
   	 			}
   	 			visited[a]=1;
   	 			q.push(a);
   	 		}
   	 	}
   	 }
   	 while(!p.empty())
   	 {
   	 	int x=p.front(); p.pop();
   	 	if(vis[x] and visited[x])q.push(x);
   	 }
      
   }
   return 0;
}



void solve()
{
   
   for(int i=0;i<=n;i++)
   	{ vis[i]=1; visited[i]=0; adj[i].clear(); mp[i]=0; }

   for(int i=0;i<k;i++)
   {
   	  cin>>x>>y;
      vis[y]=0;
   	  mp[x]=y;
   }
   for(int i=1;i<=m;i++)
   {
      cin>>x>>y;
      adj[x].pb(y);
      adj[y].pb(x);
   }
   if(bfs(1))cout<<"Y";
   else cout<<"N";
   
}

int main() 
{

   while(1)
   {
   	  cin>>n>>k>>m;
      if(n+m+k<=0)
        { break; }
        else solve();
        cout<<endl;
   }
   
}
