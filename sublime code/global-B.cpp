#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define pb push_back

void solve()
{
   ll n,u,v; cin>>n>>u>>v;
   V a(n);
   for(int i=0;i<n;i++)
   {
   	 cin>>a[i];
   }

   ll ans=INT_MAX;
   for(int i=1;i<n;i++)
   {
   	  if(abs(a[i-1]-a[i])>=2)ans=0;
   	  if(abs(a[i-1]-a[i])==1)ans = min(ans,min(u,v));
   	  if(a[i-1]==a[i])ans=min(ans , v+min(u,v));
   }


  cout<<ans<<endl;

}

int main() 
{
   int t; cin>>t;
   while(t--)
   {
   	  solve();
   }
}