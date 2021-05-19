#include <bits/stdc++.h>
using namespace std;
#define ll long long int



int main() 
{
    ll n;  cin>>n; ll t,k; cin>>t>>k;
    vector<ll> ar(n);
    for(ll i=0;i<n;i++)cin>>ar[i];
    	
      while(t--)
      {

      	  ll l,r; cin>>l>>r;
      	  // cout<<l<<" "<<r;
          cout<<k + (ar[r-1]-ar[l-1]+1)-2*(r-l+1)<<endl;
      }
}