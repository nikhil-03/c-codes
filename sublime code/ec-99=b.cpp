#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back

int solve()
{
   ll x; cin>>x;
   int cnt=0,idx=0,k=1;
   if(x==0)return 0;
   if(x>0)
   {
   	  while(idx<x)
   	  {
   	  	idx+=k++;
   	  }
   }
   cout<<idx<<" ";


   return -1;

}

int main() 
{
   int t; cin>>t;
   while(t--)
   {
   	 cout<< solve()<<endl;
   }
}