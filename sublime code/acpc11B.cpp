#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main() 
{
   int t; cin>>t;
   while(t--)
   {
       ll n,m,mn=INT_MAX;  cin>>n;
       vector<ll> ar1(n);
       for(ll i=0;i<n;i++)cin>>ar1[i];
       	cin>>m;  vector<ll> ar2(m);
       for(ll i=0;i<m;i++)cin>>ar2[i];
       
      

       for(int i=0;i<n;i++)
       {
       	for(int j=0;j<m;j++)
       	{
       		mn=min(mn,abs(ar1[i]-ar2[j]));
       	}
       }
        cout<<mn<<endl;

   }
}