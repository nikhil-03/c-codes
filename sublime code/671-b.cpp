#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
   int t; cin>>t;
   while(t--)
   {
       ll n;  cin>>n; ll k=1,ans=0;
       while(n>=(k+1)*k/2)
       {
           n=n-(k+1)*k/2;
           k=2*k+1; ans++;
       }
       cout<<ans<<endl;
   }
}