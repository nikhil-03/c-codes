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
    ll n;cin>>n;
    M m;
     for(int i=0;i<n;i++)
     {
     	 ll x,y; cin>>x>>y;
     	 m[x]++; m[y]--;
     }
     ll mx=0,cnt=0,idx=0;
     for(auto a : m)
     {
     	cnt+=a.second;
        if(cnt>mx)
        {
        	mx=cnt;
        	idx=a.first;
        }
     }
     cout<<idx<<" "<<mx;
}

int main() 
{
   
   	  solve();
   	  cout<<endl;
   
}
