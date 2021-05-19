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
   ll n,m,k; cin>>n>>m>>k;

   ll a=0;

   a+=(m-1);

   a = a + m*(n-1);

   // cout<<a;

   if(a==k)cout<<"YES";
   else cout<<"NO";

   
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
