#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back
#define For(n) for(int i=0;i<n;i++)
#define rFor(n) for(int i=n-1;i>=0;i--)


void solve()
{
   int n; cin>>n;
   V ar(n); For(n)cin>>ar[i];

   int i=0,j=n-1;
   V arr;
   int k=min(ar[0],ar[n-1]);
   // arr.pb(k);
   int cnt=0;
   while(i<j)
   {
      if(k<=ar[i] and ar[i]<=ar[j])
      {
      	 arr.pb(ar[i]);
      	 
      	 k=ar[i];
      	 // cout<<k<<" ";
      	 i++;
      }
      else if(k<=ar[j] and ar[j]<=ar[i])
      {
      	arr.pb(ar[j]);
      	
      	k=ar[j];
      	// cout<<k<<" ";
      	j--;
      }

      else break;
      


   }
   int sz=arr.size();
   for(auto a : arr)cout<<a<<" ";
  


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
