#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back

void solve()
{
   int n; cin>>n;
   V ar(n);
   for(int i=0;i<n;i++)
   	cin>>ar[i];

   
   cout<<ar[1]+ar[2];
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
