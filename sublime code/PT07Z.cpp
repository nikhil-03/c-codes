#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int> adj[10010];
vector<bool> vis(10010,0);

int md,ms;

void dfs(int s,int d)
{
	vis[s]=1;
	if(md<d){ md=d; ms=s; }
	for(int a : adj[s])
	  if(!vis[a])
		dfs(a , d+1);

}
 
int main() 
{
   int n; cin>>n;
   for(int i=0;i<n-1;i++)
   {
   	  int x,y; cin>>x>>y;
   	  adj[x].push_back(y);
   	  adj[y].push_back(x);
   }

   md=-1;
  dfs(1,0);

  // cout<<md<<" "<<ms<<endl;

  md=-1;
  for(int i=0;i<10005;i++)vis[i]=0;

  dfs(ms,0);

  // cout<<md<<" "<<ms;
  cout<<md;
}