#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
   ll t; cin>>t;
   while(t--)
   {
       ll x,y,z;
       cin>>x>>y>>z;
       cout<<(x*z)+(y*z)-z<<endl;
   }
}