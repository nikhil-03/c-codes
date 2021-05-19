#include <bits/stdc++.h>
using namespace std;
#define ll long long int



int main() 
{
   ll n; cin>>n;
   cout<<0<<endl; ll k=0;
   for(ll i=2;i<=n;i++)
   {
      ll x=i*i;
      cout<<( (x*(x-1))/2 ) - (8*k)<<endl;
      k=k+(i-1);
   }
}