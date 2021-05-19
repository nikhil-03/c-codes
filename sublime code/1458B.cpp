#include <bits/stdc++.h>
using namespace std;
#define ll long long int




int main() 
{
   int t; cin>>t;
   while(t--)
   {
       ll n,k;  cin>>n>>k;
       ll f=n/2; k--;
       cout<< ( k + (n%2) * k/f )%n+1<<endl;
   }
}