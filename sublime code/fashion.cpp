#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
   int t; cin>>t;
   while(t--)
   {
       ll n;  cin>>n;
       vector<ll> ar1(n),ar2(n);
       for(ll i=0;i<n;i++)cin>>ar1[i];
       for(ll i=0;i<n;i++)cin>>ar2[i];
       sort(ar1.begin(),ar1.end());
       sort(ar2.begin(),ar2.end());
       ll x=0;
         for(int i=0;i<n;i++)
         {
         	x+=ar1[i]*ar2[i];
         }
         cout<<x<<endl;
   }
}