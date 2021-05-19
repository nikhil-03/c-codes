#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define pb push_back

void solve()
{
   int n; cin>>n;
   V ar(n+1); for(int i=0;i<n;i++)cin>>ar[i];
   ar[n]=0;
 
   for(int i=n-1;i>=0;i--)
   {
   	  ar[i]=max(ar[i],ar[i+1]-1);
   }
   

   for(int i=0;i<n;i++)if(ar[i]>0)  cout<<1<<" "; else cout<<0<<" ";

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