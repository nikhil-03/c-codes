#include <bits/stdc++.h>
using namespace std;
#define ll long long int

// void fun(vector<int> &ar,int n)
// {
	
// }

int main() 
{
   int t; cin>>t;
   while(t--)
   {
       ll n;  cin>>n;
       pair<ll,ll> ar[n+5];
       for(ll i=1;i<=n;i++)cin>>ar[i].first;
       for(ll i=1;i<=n;i++)cin>>ar[i].second; 
       sort(ar+1,ar+n+1); //sort(ar2.begin(),ar2.end());

       for(int i =0;i<=n;i++)cout<<ar[i].first<<" "; cout<<endl;
       for(int i =0;i<=
       	n;i++)cout<<ar[i].second<<" "; cout<<endl;
       
       ll k=n,sum=0;
       while(sum<=ar[k].first && k>=1)
       {
       	sum+=ar[k].second;
       	  k--; 
       }

       cout<< min(ar[k+1].first,sum)<< endl;	
   }
}


// 3 4 5 7
// 1 2 2 4