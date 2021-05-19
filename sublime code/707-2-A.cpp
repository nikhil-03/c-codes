#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define pb push_back

void solve()
{
   int n; cin>>n;
   vector<vector<int>> v(n,vector<int>(2,0));
   vector<int> diff(n);
   for(int i=0;i<n;i++)
   {
   	  cin>>v[i][0]>>v[i][1];
   	  if(i>0)
   	  {
   	  	diff[i]=v[i][0]-v[i-1][1];
   	  }
   }
   V tx(n); for(int i=0;i<n;i++)cin>>tx[i];
   ////////////////////
   int i=0;
   int k=(v[i][1]-v[i][0])/2+(v[i][1]-v[i][0])%2;
   	  v[i][0]+=tx[i];  
   	  
   	   if(v[i][0]+k>v[i][1])
   	   {
   	   	  v[i][1]=v[i][0]+k;
   	   }

   // cout<<v[0][0]<<" "<<v[0][1]<<endl;
   
   for(int i=1;i<n;i++)
   {
   	  int ai=v[i][0],bi=v[i][1];
   	  int k=(bi-ai)/2 + (bi-ai)%2;

   	  // cout<<v[i-1][1]<<" "<<tx[i]<<" "<<diff[i]<<endl;

   	  v[i][0]=v[i-1][1]+tx[i]+(diff[i]);



   	  
   	   if(v[i][0]+k>v[i][1])
   	   {
   	   	  v[i][1]=v[i][0]+k;
   	   }

   }
   cout<<v[n-1][0];
   // for(int i=0;i<n;i++)
   // {
   // 	cout<<v[i][0]<<" "<<v[i][1]<<endl;
   // }

}

int main() 
{
   int t; cin>>t;
   while(t--)
   {
   	  solve();
   	  cout<<endl;
   }
}