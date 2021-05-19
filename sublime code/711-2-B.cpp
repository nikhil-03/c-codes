#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back

void solve()
{
   ll n,w;
   cin>>n>>w;
   multiset<ll> ms;
   for(int i=0;i<n;i++)
   {
   	 ll x; cin>>x;
     ms.insert(x);
   }
   int h=1,sl=w;
   while(!ms.empty())
   {
   	  auto it=ms.upper_bound(sl);
   	  if(it!=ms.begin())
   	  {
   	  	it--;
   	    int val = *it;
   	    sl-=val;
   	    ms.erase(it);
   	  }
   	  else 
   	  {
   	  	h++; 
   	  	sl=w;
   	  }
   }
    cout<<h<<endl;
}

int main() 
{
   int t; cin>>t;
   while(t--)
   {
   	  solve();
   }
}