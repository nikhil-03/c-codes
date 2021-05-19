#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back
#define For(n) for(int i=0;i<n;i++)
#define rFor(n) for(int i=n-1;i>=0;i--)



void solve()
{
   ll a,b,x,y,n;
   cin>>a>>b>>x>>y>>n;
   ll bb=b,aa=a;
   

   

   ll k1=a-n; if(k1<x)k1=x;

   if(a-n < x)b=b-(x-(a-n));

   if(b<y)b=y;

   // cout<<k1<<" "<<b<<"->";
   // cout<<k1*b<<" ";
   ll ans=k1*b;

    b=bb; a=aa;

    ll l1=b-n; if(l1<y)l1=y;
    if(b-n < y)a=a-(y-(b-n));
    
   if(a<x)a=x;

    // cout<<a<<" "<<l1<<"->";
    // cout<<a*l1;

    cout<<min(ans,(a*l1));

   // cout<<ans;


   // cout<<k<<" "<<l;

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
