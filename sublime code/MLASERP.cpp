#include <bits/stdc++.h>
using namespace std;
#define ll int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back
#define For(n) for(int i=0;i<n;i++)
#define rFor(n) for(int i=n-1;i>=0;i--)

int X[8]={ 1 ,-1, 0 , 0 , 1, 1 , -1 ,-1 };
int Y[8]={ 0 ,0 , 1 ,-1 , 1,-1 , -1 , 1 };

int n,m,s1,e1,s2,e2;

int dist[128][128];

bool check(ll i,ll j,ll n,ll m)
{	if(i<0 or j<0 or i>=n or j>=m)return 0;
	return 1; }

int bfs(vector<string> &adj)
{
   queue<int> q;
   memset(dist,0x3f,sizeof(dist));
   dist[s1][e1]=-1;
   q.push(s1); q.push(e1);

   while(!q.empty())
   {
   	  int r1=q.front(); q.pop();
   	  int c1=q.front(); q.pop();
   	   for(int i=0;i<4;i++)
   	   {
   	   	  int r2=r1+X[i];
   	   	  int c2=c1+Y[i];

   	   	   while(check(r2,c2,m,n) and adj[r2][c2]!='*')
   	   	   {
   	   	   	  // cout<<r2<<" "<<c2<<endl;
              if(dist[r2][c2]>dist[r1][c1]+1)
              {
              	dist[r2][c2]=dist[r1][c1]+1;
              	// cout<<dist[r2][c2]<<" "<<endl;
                if(r2==s2 and c2==e2)return dist[r2][c2];
                q.push(r2); q.push(c2);
              }
              r2+=X[i];
              c2+=Y[i];
   	   	   }
   	   }
   }
   return dist[s2][e2];
}

void solve()
{
   cin>>n>>m;
   vector<string> adj(m);
   int cnt=0;
   for(int i=0;i<m;i++)
   {
   	  cin>>adj[i];
   	  // cout<<adj[i]<<endl;
   	  for(int j=0;j<n;j++)
   	  {
   	  	if(adj[i][j]=='C' and cnt==0)
   	  	{
           s1=i,e1=j; cnt++;
   	  	}
   	  	else if(adj[i][j]=='C' and cnt==1)
   	  	{
   	  		s2=i,e2=j; cnt++;
   	  	}
   	  }
   }
   // cout<<s1<<" "<<e1<<endl;
   // cout<<s2<<" "<<e2<<endl;
   cout<<bfs(adj)<<endl;
   // for(int i=0;i<m;i++)
   // {
   // 	for(int j=0;j<n;j++)
   // 	{
   // 		cout<<dist[i][j]<<" ";
   // 	}cout<<endl;
   // }
}

int main() 
{
   int t=1;
   while(t--)
   {
   	  solve();
   	  cout<<endl;
   }
}
