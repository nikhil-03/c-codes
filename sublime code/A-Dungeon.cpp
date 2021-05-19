#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back

void solve()
{
   ll a,b,c; cin>>a>>b>>c;
   if((a+b+c)%9>0){ cout<<"NO"; return; }
   ll k=(a+b+c)/9;

   if(a>=k and b>=k and c>=k)cout<<"YES";
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