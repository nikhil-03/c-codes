#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{
   int t; cin>>t;
   while(t--)
   {
       ll n;  cin>>n; 
       vector<ll> a(n),b(n);
       for(int i=0;i<n;i++){ cin>>a[i]; b[i]=a[i]; }        
        sort(a.begin(),a.end());



       ll sum=a[0],temp=a[0],k=0;
       for(int i=1;i<n;i++)
       {
       	  if(sum>=a[i])
       	  {
       	  	k++; 
       	  }
       	  else
       	  {
       	  	k=0; temp=a[i];
       	  }
       	  sum+=a[i];
       }
       cout<<k+1<<endl; 
       // cout<<temp;
       for(int i=0;i<n;i++)
       {
       	if(b[i]>=temp)cout<<i+1<<" ";
       }
       cout<<endl;
   }
}