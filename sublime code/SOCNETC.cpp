#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int id[200010],sz[200010];
int n,m;

void init(){ for(int i=0;i<200010;i++)id[i]=i,sz[i]=1; }

int root(int x)
{
   while(id[x]!=x)
   {
   	id[x]=id[id[x]];
   	x=id[x];
   }
   return x;
}
void unon(int x,int y)
{
	int p=root(x);
	int q=root(y);
    sz[q]+=sz[p];
    id[p]=id[q];
}

int main() 
{
   cin>>n>>m;
   init();
   int t; cin>>t;
   while(t--)
   {
   	char c; cin>>c;
      if(c=='S')
      {
      	int x; cin>>x;
      	cout<<sz[root(x)]<<endl;
      }
      else if(c=='A')
      {
      	int x,y; cin>>x>>y;
      	if(root(x)!=root(y) and sz[root(x)]+sz[root(y)]<=m)
      	unon(x,y);
      }
      else if(c=='E')
      {
      	int x,y; cin>>x>>y;
      	if(root(x)==root(y))cout<<"Yes"<<endl;
      	else cout<<"No"<<endl;
      }
   }
}