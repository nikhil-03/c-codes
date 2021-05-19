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
   string s; cin>>s;
   int am=0,at=0;
   V m,t;
   For(n)
    if(s[i]=='M'){am++; m.pb(i); }
     else { at++; t.pb(i); }
     
    if(2*am!=at){ cout<<"NO"; return; }
     For(m.size())
     {
       if(m[i]<t[i] or m[i]>t[i+m.size()])
       	{ cout<<"NO"; return; }
     }
 

    cout<<"YES";
    return; 
   


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
