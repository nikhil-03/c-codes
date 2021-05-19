#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

int main() 
{
   
       ll n,x,pos;  cin>>n>>x>>pos;
       ll l=0,r=n,lx=x-1,rx=n-x;  ll ans=1;
       	while(l<r)
       	{
       		int mid=(l+r)/2;
       		if(pos>=mid)
       		{
       			l=mid+1;
                  if(pos!=mid)
                  {	ans=ans*lx; lx--; }
       		}
       		else
       		{
       			r=mid;
       			ans=ans*rx; rx--;
       		}
       		ans=ans%mod;
       	}
       	for(int i=1;i<=lx+rx;i++)
       	{
       		ans=(ans*i)%mod;
       	}
       	cout<<ans;
   
}