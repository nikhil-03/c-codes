#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back

set<int> s;

void solve()
{
   int n; cin>>n;
   ll mul=1;
   V ar(n);
   int i;
   for(i=0;i<n;i++)
   {
      ll x; cin>>x; 
      ar[i]=x;
      mul*=x;
   }
   // if(s.find(mul)==s.end()){cout<<"YES"; return; }
   for(i=0;i<n;i++)
   {
      ll x=ar[i];
       if(s.find(x)==s.end()){cout<<"YES"; return; }
   }
   
   cout<<"NO";
   return;

}

int main() 
{
   int t; cin>>t;
   for(int i=1;i<1005;i++)
   {
   	 s.insert(i*i);
   }
   while(t--)
   {
   	  solve();
   	  cout<<endl;
   }
}
