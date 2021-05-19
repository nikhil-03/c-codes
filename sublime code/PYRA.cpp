#include <bits/stdc++.h>
using namespace std;
#define ll long long int

 vector<int> adj[10010];
vector<int> dist(10010,0);
vector<bool> vis(10010,0);

void dfs(int s)
{
	vis[s]=1;
	for(auto a : adj[s])
	{
		if(!vis[a])
		{
			vis[a]=1;
			dfs(a);
			dist[s]=dist[s]+dist[a]+1;
		}
	}
	dist[s]+=1;
}

int main() 
{
   int t; cin>>t;
   while(t--)
   {
       ll n;  cin>>n;
       for(int i=0;i<n+5;i++)
       {
       	  adj[i].clear(); vis[i]=false; dist[i]=0;
       }
       for(int i=0;i<n-1;i++)
       { 
       	  int x,y;

       	 cin>>x>>y;
       	 // cout<<x<<" "<<y<<endl;
       	 adj[x].push_back(y);
       	 adj[y].push_back(x);
       }

       vis[0]=1;
       dfs(0);
      ll sum=0;
       for(int i=0;i<n+1;i++)sum+=dist[i];
       	cout<<sum<<endl;
       
   }
}