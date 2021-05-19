#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
   int t; cin>>t;
   while(t--)
   {
       ll n;  cin>>n;
       vector<ll> ar(n);  ll j=0;
       for(ll i=0;i<n;i++)
       	{ 
       		cin>>ar[i];
       	}
       for(int i=0;i<n-1;i++)
       {
       	  if(ar[i]!=ar[i+1])

       	  	ar[j++]=ar[i];
       }

       if(j==0)cout<<n<<endl;
       else
        cout<<j<<endl;
   }
}