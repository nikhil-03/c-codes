#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
   ll n,s=0;  cin>>n;
   for(int i=0;i<n-1;i++)
      {
      	int k; cin>>k; s+=k;
      }    
     cout<<(n*(n+1)/2)-s;
}