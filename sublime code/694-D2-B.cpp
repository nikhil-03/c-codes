#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back

void solve()
{
   ll n , x , j=1 , sum=0; cin>>n>>x;
   V ar(n); for(int i=0;i<n;i++)cin>>ar[i];
 
   for(int i=0;ar[i]%j==0;i=i%n)
   {
      sum+=ar[i];
      if(i+1==n)j=j*x;
      i++;
   }

   cout<<sum;

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