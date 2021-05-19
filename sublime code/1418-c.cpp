#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void fun(vector<int> &ar,int n)
{
	
}

int main() 
{
   int t; cin>>t;
   while(t--)
   {
       ll n;  cin>>n;
       vector<ll> ar(n);
       for(ll i=0;i<n;i++)cin>>ar[i];
       // fun(ar,n);	
       	ll x=ar[0];
       for(int i=1;i<n-2;i++)
       {
       	 if(ar[i] and ar[i+1] and ar[i+2]) x++,i=i+2;
       }
       cout<<x<<endl;
   }
}