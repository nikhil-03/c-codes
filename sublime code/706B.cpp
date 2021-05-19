#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> ar
#define pb push_back
 

 
int main() 
{
   int t; cin>>t;
   while(t--)
   {
   	  map<ll,ll> m;
   	  ll n,k; cin>>n>>k;
   	  ll cnt=0,mx=0,mex=0,d=0;
   	  for(int i=0;i<n;i++)
   	  {
   	  	ll x; cin>>x;
   	  	if(m[x]==0)cnt++;  m[x]++; 
   	  	mx=max(mx,x);
   	  }
   	  while(m[mex]==1)mex++;
     

      if(mex>mx)cout<<cnt+k<<endl;

      else if(mex<mx and k){ 
      	if(m[(mx+mex+1)/2]==0){
      		cnt++;
      	}
      	cout<<cnt<<endl;
      }
      else cout<<cnt<<endl;


   	  // cout<<mex<<" "<<mx<<endl;
   }
}