#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
   int t; cin>>t;
   while(t--)
   {
       ll n;  cin>>n;
       ll i,ans=INT_MAX;
      for(i=1;i<=sqrt(n)+5;i++)
      {
      	ans=min(ans,  i-1 + ((n-i) + i-1 )/i );
      }
      cout<<ans<<endl;

   }
}