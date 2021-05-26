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
   int n; cin>>n;
   V ar(n);  ll ans=0,k=1;
   map<ll,ll> m;
   For(n)
   {
      ll a; cin>>a;
      // if(a-k==0)zero++;
      // cout<<a-k<<" ";
      m[a-k]++;
      k++;
   }
   for(auto a : m)//cout<<a.first<<" "<<a.second<<endl;
    {
      ll k=a.second;
      ans+=(k*(k-1))/2;
    } 
    cout<<ans;
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
