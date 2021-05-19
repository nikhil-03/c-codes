#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back

void solve()
{
   int n,m;  
   cin>>n;
   V ar1(n);
   for(int i=0;i<n;i++)cin>>ar1[i];
   cin>>m;
   V ar2(m);
   for(int i=0;i<m;i++)cin>>ar2[i];

   ll f=ar1[0],r=ar2[0];
   	for(int i=1;i<n;i++)
   	{
      ar1[i]+=ar1[i-1];
      f=max(f,ar1[i]);
      // cout<<ar1[i]<<" ";
   	}
   	f=max(0LL,f);
    for(int i=1;i<m;i++)
    {
      ar2[i]+=ar2[i-1];
      r=max(r,ar2[i]);
    }
    r=max(0LL,r);
    cout<<max(0LL,f+r);
     
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