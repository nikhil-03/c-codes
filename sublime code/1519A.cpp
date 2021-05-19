#include <bits/stdc++.h>
using namespace std;
#define ll long double
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back
#define For(n) for(int i=0;i<n;i++)
#define rFor(n) for(int i=n-1;i>=0;i--)


void solve()
{
   ll r,b,d;
   cin>>r>>b>>d;
   ll x;

   // if(r==1 or b==1)
   // {
   // 	  if(abs(r-b)>d)
   // 	  {
   // 	  	cout<<"NO"; return;
   // 	  }
   // 	  else { cout<<"YES"; return; }
   // }
   	

  x=min(r,b);

  ll k1=r/x,k2=b/x;

// cout<<k1<<" "<<k2;

ll k3=abs(k1-k2);
// cout<<k3;
   if(k3<=d)cout<<"YES";
   else cout<<"NO";

   // if(x>d)cout<<"NO";
   // else cout<<"YES";
   
   
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
