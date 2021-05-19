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
  
   V ar(n); 
   ll cnt=0;
   For(n)cin>>ar[i];
   int ind=n-1;
   while(ind>0 and ar[ind-1]>=ar[ind])ind--;
   
   while(ind>0 and ar[ind-1]<=ar[ind])ind--;

   
  cout<<ind;
   


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
