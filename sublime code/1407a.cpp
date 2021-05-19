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
    ll n; cin>>n;
    M m; V ar(n);
    For(n){ cin>>ar[i]; m[ar[i]]++; }
    
    if(m[0]>=n/2)
    {
    	cout<<m[0]<<endl;
    	For(n)if(ar[i]==0)cout<<ar[i]<<" ";
    	return;
    }
   
    if(m[1]%2==1)m[1]--;
     if(m[1]>=n/2)
    {
    	cout<<m[1]<<endl;
    	For(n)if(ar[i]==1 and m[1]>0){cout<<ar[i]<<" "; m[1]--; }
    }
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
