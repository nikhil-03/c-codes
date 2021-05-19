#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void fun(vector<ll> &ar,int n,int k)
{
	int x=0;
	for(int i=0;i<n;i++)
	{
		x+=ar[i];
	}
	if(x==k)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}

int main() 
{
   int t; cin>>t;
   while(t--)
   {
       ll n,k;  cin>>n>>k;
       vector<ll> ar(n);
       for(ll i=0;i<n;i++)cin>>ar[i];
       fun(ar,n,k);	
   }
}