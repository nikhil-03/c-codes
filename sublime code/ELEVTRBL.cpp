#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool vis[1000010];
vector<ll> level(1000010,-1);
ll u,d,f;

void bfs(ll s)
{
	queue<ll> q;
	q.push(s);
	level[s]=0;
	vis[s]=1;
	while(!q.empty())
	{
	  ll n=q.size();
	  for(ll i=0;i<n;i++)
	  {
		ll p=q.front();
		q.pop();
		if(p+u<=f and !vis[p+u])
			{q.push(p+u); level[p+u]=level[p]+1; vis[p+u]=1;}
		if(p-d>=1 and !vis[p-d])
			{q.push(p-d); level[p-d]=level[p]+1; vis[p-d]=1;}
	  }
	}
}



int main() 
{
   ll s,g; cin>>f>>s>>g>>u>>d;
    memset(vis,0,sizeof(vis));
    bfs(s);

    if(level[g]==-1)cout<<"use the stairs";
    else cout<<level[g];
    
}