#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back

vector<ll> pm(100000,1);
vector<ll> prime(100000);

void init()
{
 pm[0]=pm[1]=0;
 for(int i=2;i*i<=100000;i++)
 {	if(pm[i]==1)
	{
		for(int j=i*i;j<=100000;j=j+i)
		{
			pm[j]=0;
		}
	}
 }
 int cnt=0;
 for(int i=0;i<=100000;i++)
 {
 	if(pm[i]==1)prime[cnt++]=i;
 }
}

void solve()
{
   ll x; cin>>x;
   ll y=0;

   for(int i=0;i<x+3;i++)
   {
   	  if(prime[i]>=x+1){
   	  	// cout<<prime[i]<<" ";  
   	  	y=prime[i]; break;
   	  }
   }
   for(int i=0;i<x+y+3;i++)
   {
   	  if(prime[i]>=x+y){
   	  	// cout<<prime[i]; 
   	  	x=prime[i];
   	  	break;
   	  }
   }
   cout<<min(1LL*x*y,1LL*y*y*y);
}

int main() 
{
   int t; cin>>t;
   init();
   while(t--)
   {
   	  solve();
   	  cout<<endl;
   }
}