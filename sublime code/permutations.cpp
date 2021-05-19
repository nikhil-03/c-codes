#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
   int n; cin>>n; 
   if(n==1){ cout<<"1"; return 0; }
   if(n<4){cout<<"NO SOLUTION"; return 0; }
   int i=1,j=2;
   while(j<=n)
   {
   	cout<<j<<" "; j=j+2;
   }
   while(i<=n)
   {
   	cout<<i<<" "; i=i+2;
   }
   
   return 0;
}