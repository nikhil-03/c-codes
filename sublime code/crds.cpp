#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
   int t; cin>>t;
   while(t--)
   {
       ll n;  cin>>n;
       ll x=3;
       for(int i=0 ; i <n-1 ;i++)
       {
           x=x + 3*(i+2);
       }
       // cout<<x<<endl;
       cout<<(x-n)%1000007<<endl;
   }
}