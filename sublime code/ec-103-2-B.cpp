#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back



ll solve()
{
   ll n,k ; cin>>n>>k;
   k=k*( (n+k-1)/k );
   return (n+k-1)/n;
     
   
}

int main() 
{
   int t; cin>>t;
   while(t--)
   {
   	  cout<<solve(); cout<<endl;
   }
}