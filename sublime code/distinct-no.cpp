#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main() 
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   set<ll> s;
   ll n; cin>>n;
   for(int i=0;i<n;i++)
     {
     	ll a; cin>>a;
     	s.insert(a);
     } 
     cout<<s.size();

     return 0;
}