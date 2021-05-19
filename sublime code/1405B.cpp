#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
   ll t; cin>>t;
   while(t--)
   {
       ll n,nm=0;  cin>>n;
       ll c=0;
       for(ll i=0;i<n;i++)
       {
           ll x; cin>>x;
           c=max(nm,x+c);
       }
       cout<<c<<endl;
   }
}