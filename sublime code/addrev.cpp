#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int beauty(int n)
{
	while(n%10==0)
	{
		n=n/10;
	}
	return n;
}

int rev(int n)
{
	int x=0;
	while(n>0)
	{
		x= x*10 + n%10;
		n=n/10;
	}
	return x;
}

int main() 
{
   int t; cin>>t;
   while(t--)
   {
       ll n,m;  cin>>n>>m;
       
       n=beauty(n); m=beauty(m);

       ll x=rev(n); ll y=rev(m);
      // cout<<x<<" "<<y<<endl;
       cout<<rev(x+y)<<endl;
       
   }
}