#include <bits/stdc++.h>
using namespace std;
#define ll long long int
map<ll,ll> parent;
ll c=0;
map<ll,ll> rk;

ll root(ll x)
{
   while(parent[x]!=x)
   {
   	parent[x]=parent[parent[x]];
   	x=parent[x];
   } return x;
}
void unon(ll x,ll y)
{
   if(rk[x]>rk[y])
   {
   	 rk[x]+=rk[y];
   	 parent[y]=parent[x];
   }
   else 
   {
   	 rk[y]+=rk[x];
   	 parent[x]=parent[y];
   }
}
int main() 
{
   ll n,m; cin>>n>>m;
    c=n;
   for(ll i=0;i<m;i++)
   {
   	  ll x,y; cin>>x>>y;
   	  if(!parent[x]){parent[x]=x; rk[x]=1; }
   	  if(!parent[y]){parent[y]=y; rk[y]=1; } 
   	  
    	ll a = root(x) , b = root(y);
    	if(a!=b)
    	{
    		c--;
    		unon(a,b);
    	}

    }
   cout<<c<<endl;
}