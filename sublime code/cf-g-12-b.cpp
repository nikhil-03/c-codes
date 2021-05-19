#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back

void solve()
{
   int n,k; cin>>n>>k;
   V x(n),y(n);
   for(int i=0;i<n;i++)
   {
   	  cin>>x[i];
   	  cin>>y[i];
   }
     ll ans=-1;
   for(int i=0;i<n;i++)
   {
   	  ll mx=0;
   	 for(int j=0;j<n;j++)
   	 {
   	 	mx=max(mx,abs(x[i]-x[j])+abs(y[i]-y[j]));
   	 }
   	 if(mx<=k)
   	 	  {ans=1;}
   }
cout<<ans; return;


}

int main() 
{
   int t; cin>>t;
   while(t--)
   {
   	  solve();
   	  cout<<endl;
   }
}
