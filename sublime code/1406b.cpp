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
   int neg=0,pos=0;
   For(n){ cin>>ar[i]; if(ar[i]<0)neg++; else pos++; }
   
     ll ans=1;
   if(n==5){ For(n)ans*=ar[i];  cout<<ans; return ; }


    sort(ar.begin(),ar.end());
      
      ll a=ar[0]*ar[1]*ar[2]*ar[3]*ar[n-1];
      ll b=ar[0]*ar[1]*ar[n-1]*ar[n-2]*ar[n-3];
      ll c=ar[n-1]*ar[n-2]*ar[n-3]*ar[n-4]*ar[n-5];

      cout<<max(a,max(b,c));
      return;
   
   cout<<neg<<" "<<pos;
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
