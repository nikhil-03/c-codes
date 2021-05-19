#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back

void solve()
{
   ll n,k; cin>>n>>k;
   V ar(n); for(int i=0;i<n;i++)cin>>ar[i];

   int i=0,j=n-1;
   while(k>0 and i!=j)
   { 
     while(ar[i]>0 and i!=j and k>0)
     {
     	ar[i]--; ar[j]++;
     	k--;
     }
     i++;

   	 
   }
   for(auto a : ar)cout<<a<<" ";
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
