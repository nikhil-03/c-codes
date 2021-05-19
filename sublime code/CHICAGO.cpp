#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define pb push_back
#define For(n) for(int i=0;i<n;i++)
#define pii pair<double,double>
int n,m; 

void solve()
{
   vector<pii> adj[100000];
   for(int i=0;i<m;i++)
   {
     int x,y; double c; cin>>x>>y>>c;

     adj[x].pb({y,c/100});
     adj[y].pb({x,c/100});
   }
   priority_queue<pii> pq;
   pq.push({0,1});
   double dist[n+5]; 
   for(int i=0;i<=n;i++){ dist[i]=INT_MIN;  }
   	dist[1]=1;
   while(!pq.empty())
   {
      int prev=pq.top().second;
      pq.pop();
      for(auto a : adj[prev])
      {
      	 int next=a.first; double wt=a.second;
      	 if(dist[prev]*wt > dist[next])
      	 {
      	 	dist[next]=dist[prev]*wt;
      	 	pq.push({dist[next],next});
      	 }
      }
   }
     
   // cout<<dist[5]*100<<endl;
   cout<<fixed<<setprecision(6)<<dist[n]*100<<" "<<"percent";
}

int main() 
{
  while(1)
  {	
   cin>>n>>m;
   if(n==0)return 0;
   // cout<<n<<" "<<m;
   solve();
   cout<<endl;
  }
}
