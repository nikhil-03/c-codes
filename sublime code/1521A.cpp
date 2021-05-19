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
 ll n,m; cin>>n>>m;
 if(m==1){ cout<<"NO"; return; }
 for(int i=1;i<n+m;i++)
 {
   ll a=n;
   ll c=n*m*i;
   ll b=((m*i)-1)*n;
 
   if(a+b==c and a!=b and b!=c and a!=c){
      cout<<"YES"<<endl;
      cout<<a<<" "<<b<<" "<<c;
      return;
   }
}
   // else cout<<"NO";
   
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
