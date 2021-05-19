#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
   ll n,s=0,ans=0; cin>>n;
   cin>>s; //cout<<n;
   for(int i=0;i<n-1;i++)
   {
   	ll k;   cin>>k;  //cout<<k<<" "<<s<<endl;
   	if(k<s)
   	{
       ans+=(s-k);// cout<<ans<<" ";
   	}
     else s=k;
   }
   cout<<ans;
}