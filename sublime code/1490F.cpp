#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
   ll t; cin>>t;
   while(t--)
   {
      ll n;  cin>>n;
      map<ll , ll > m1,m2;
      vector<ll> ar(n);
      for(ll i=0;i<n;i++){ll x; cin>>x; m1[x]++; }

      for(auto[x,y] : m1)
      	m2[y]++;

       ll res=n,left=0,right=n,k=(ll)m1.size();
      for(auto[x,y] : m2)
      {
         res=min(res , left + right - k*x);
         left+=x*y;
         right-=x*y;
         k-=y;
      }
      cout<<res<<endl;   
   }

}