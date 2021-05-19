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
   V ar(n+1); For(n)cin>>ar[i];
   int k=0;
   // if(ar[0]>0)k=1; else k=-1;

   for(int i=0;i<n;i++)
   {
   	  if(i&1)cout<<-1*abs(ar[i])<<" ";
   	  else cout<<abs(ar[i])<<" ";
   	  //  if(i&1) ar[i]=-1*abs(ar[i]);
   	  // else ar[i]=abs(ar[i]);
   }

   // For(n-1)
   // {
   // 	  cout<<ar[i+1]-ar[i]<<" ";
   // }
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
