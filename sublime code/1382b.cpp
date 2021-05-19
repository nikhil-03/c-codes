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
   ll n; cin>>n; V ar(n);
   bool may=0;
   For(n)
   {
      cin>>ar[i]; 
      if(ar[i]>1) may=1;
   }
   if(n==1)
   {
   	  cout<<"First";  
   	  return;
   }
   if(may==0)
   {
      if(n&1)cout<<"First";
      else cout<<"Second";
      return;
   }
   for(int i=0;i<n;i++)
   {
   	  if(ar[i]>1)
   	  {
   	  	if(i%2==0)cout<<"First";
        else cout<<"Second";
        return;
   	  }
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
