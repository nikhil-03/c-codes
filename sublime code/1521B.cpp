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
   V ar(n); ll pos=0 ,x=1e9+7;
   For(n)
   {
      cin>>ar[i]; //cout<<ar[i]<<" ";
      if(x>ar[i])
      {
         x=ar[i]; pos=i;
      }
   }
   cout<<n-1<<endl;
   For(n)
   {
      if(i==pos)continue;
      cout<<pos+1<<" "<<i+1<<" "<<x<<" "<<x+abs(pos-i)<<endl; 
   }
   
}

int main() 
{
   int t; cin>>t;
   while(t--)
   {
        solve();
   }
}
