#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
   
       ll n;  cin>>n;
       ll ar[n];
       for(ll i=0;i<n;i++)cin>>ar[i];
         int x; cin>>x;
     
       	for(int i=0;i<n;i++)
          {
          	if(x>=0 and x<n)cout<<ar[x]<<" ";
          	else if(x>=n)cout<<ar[x%n]<<" ";
          	else if(x<0)  
          	{
               cout<<ar[n+x]<<" ";
          	}
          	x++;
          }
   
}