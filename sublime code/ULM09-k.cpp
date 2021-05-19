#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define pb push_back
#define For(n) for(int i=0;i<n;i++)
int n,m; 
int id[2000002],ran[2000002];

void init()
{
	For(n+5){ id[i]=i,ran[i]=0; }
}

int root(int x)
{
	while(id[x]!=x)
	{
		id[x]=id[id[x]];
		x=id[x];
	}
	return x;
}

void unon(int a,int b)
{
	int p=root(a);
	int q=root(b);
	 if(ran[p]<ran[q])id[p]=q;

	 else if(ran[q]<ran[p])id[q]=p;

	 else { id[q]=p; ran[p]++; }
}

void solve()
{
   init();
    ll ans=0,tc=0;
   pair<int , pair<int,int> > adj[200002];
   For(m)
   {
      int x,y,c; cin>>x>>y>>c;	
   	  adj[i]={c,{x,y}}; tc+=c;
   }
  sort(adj,adj+m);

   for(int i=0;i<m;i++)
   {
   	  int x=adj[i].second.first;
   	  int y=adj[i].second.second;
      if(root(x)!=root(y))
      {
      	 ans+=adj[i].first;
      	 unon(x,y);
      }
   }
   cout<<tc-ans;
}

int main() 
{
   while(1)
   {
   	  cin>>n>>m;
   	  // cout<<n<<" "<<m<<endl;
   	  if(n==0 and m==0)return 0;
   	  else { solve(); cout<<endl; }
   }
}
