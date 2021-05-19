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
    ll x,y,k;
    cin>>x>>y>>k;
    ll s=1,c=0;
    ll cnt=0,req=0;
    cnt+=(k);
    req+=(y*k);
    // cout<<req<<" ";
   req+=k;

    ll rr=(req-1)/(x-1);

    if(rr*(x-1)+1<req)
    {
    	rr++;
    }

    cout<<rr+cnt;
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
