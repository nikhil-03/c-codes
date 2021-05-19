#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back

void solve()
{
   ll n,m; cin>>n>>m;
   V ar(n),price(m);
   bool vis[m]={0};
   for(int i=0;i<n;i++)cin>>ar[i];
   	sort(ar.rbegin(),ar.rend());
   for(int i=0;i<m;i++)cin>>price[i];
   
    ll ans=0,ind=0;
   // }
for(int i=0;i<n;i++)
{
  if(ind<=ar[i]-1) ans+=price[i],ind++;
   else ans+=price[ar[i]-1];
}
  cout<<ans<<endl;
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

 
