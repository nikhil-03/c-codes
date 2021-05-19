#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define pb push_back
#define For(n) for(int i=0;i<n;i++)
#define inf INT_MAX
#define pii pair<ll,ll>



void solve()
{
   int n; cin>>n;
   vector<pair<int,int>> adj[n+10];
   map<string,int> m;
   for(int i=0;i<n;i++)
   {
      string s; cin>>s;
      m.insert(make_pair(s,i+1));
      int n1; cin>>n1;
      for(int i1=0;i1<n1;i1++)
      {
      	int x,y;
      	cin>>x>>y;
      	adj[i+1].pb({x,y});
      }
   }

   int test; cin>>test;
   while(test--)
   {
   	  string s; cin>>s;
   	  auto it=m.find(s);
   	  int start=(*it).second;
   	  cin>>s;
   	  it=m.find(s);
   	  int end=(*it).second;
   	  ll vis[n+1],dist[n+1];
   	  for(int i=0;i<=n;i++)
   	  {
   	  	vis[i]=0; dist[i]=inf;
   	  }
   	  dist[start]=0;
   	  priority_queue< pii , vector<pii>, greater<pii> > pq; 
   	  pq.push({0,start});
   	   while(!pq.empty())
   	   {
   	   	  int d=pq.top().first;
   	   	  int e=pq.top().second;
   	   	  pq.pop();
   	   	  if(vis[e])continue;
   	   	  for(auto a : adj[e])
   	   	  {
   	   	  	int q=a.first;
   	   	  	int w=a.second;
             if(!vis[q] and dist[e]+w<dist[q])
             {
             	dist[q]=dist[e]+w;
             	pq.push({dist[q],q});
             }
   	   	  }
   	   	  vis[e]=1;
   	   	  if(e==end)break;
   	   }
   	   cout<<dist[end]<<endl;
   }

   
}

int main() 
{
   int t; cin>>t;
   while(t--)
   {
   	  solve();
   	  // cout<<endl;
   }
}
