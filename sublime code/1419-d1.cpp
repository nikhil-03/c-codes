#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
   // int t; cin>>t;
   // while(t--)
   // {
       ll n;  cin>>n;
       ll ar[n];
       for(ll i=0;i<n;i++)cin>>ar[i];
       	sort(ar,ar+n);
       if(n%2==0)cout<<n/2-1<<endl;
       else cout<<n/2<<endl;

       int i=0,j=n-1; bool flag=true;
       int mid=n/2;
       	  cout<<ar[mid]<<" ";
       while(i<j)
       {
           if(flag){ cout<<ar[i]<<" "; i++; flag=0; }
           else if(!flag){cout<<ar[j]<<" "; j--; flag=1; }
       }

   // }
}