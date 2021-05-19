#include <bits/stdc++.h>
using namespace std;
#define ll long long int



int main() 
{
   int t; cin>>t;
   while(t--)
   {
       ll n;  cin>>n; 
       ll c=n; 
       vector<ll> ar(n);
       for(ll i=0;i<n;i++)
       	{
       		cin>>ar[i];
       	}
        sort(ar.begin(),ar.end());
       	for(int i=0;i<n-1;i++)
       	{
       		if(ar[i+1]>ar[i]){ c=i+1; break;  }
       	} 
        cout<<n-c<<endl;
   }
}