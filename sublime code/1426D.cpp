#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main() 
{
   ll n,s=0,x,ans=0;  cin>>n;
   map<ll,bool> m;
   m[0]=1;
   for(ll i=0;i<n;i++)
   	{
   		cin>>x; s+=x;
   		if(m[s])
   		{
   			s=x;
   			ans++; m.clear(); m[s]=m[0]=1;
   		}
   		else m[s]=1;
   	}
   cout<<ans;
}
