#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define pb push_back

void solve()
{
   int n,k; cin>>n>>k;


   V ans;

   for(int i=(k+1)/2;i<=k-1;i++)ans.pb(i);
   // if(n==k){cout<<0; return; }
   for(int i=k+1;i<=n;i++)ans.pb(i);
   
   cout<<ans.size()<<endl;
   for(auto a : ans)cout<<a<<" ";
   	
 
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