#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define N 100010
int sz[N];
multiset<int> ms;
int id[N];
int mx=1,mn=1;

int root(int x)
{
   while(id[x]!=x)
   {
   	id[x]=id[id[x]];
   	x=id[x];
   } return x;
}
void unon(int x,int y)
{
  id[root(y)]=id[root(x)];
}
int main() 
{
   int n,m; cin>>n>>m;
   for(int i=1;i<=n;i++)
   {
   	 id[i]=i;sz[i]=1; ms.insert(1);
   }
   for(int i=0;i<m;i++)
   {
   	  int x,y; cin>>x>>y;
   	  int a=root(x),b=root(y);
   	  if(a!=b)
   	  {
   	  	ms.erase(ms.find(sz[a]));
   	  	ms.erase(ms.find(sz[b]));
        sz[a]+=sz[b];
        ms.insert(sz[a]);
        sz[b]=0;
        unon(x,y);
   	  }
    	  multiset<int>::iterator itr=ms.end();
    	  itr--;
    	  cout<<*itr-*ms.begin()<<endl;
    }
}