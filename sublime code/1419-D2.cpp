#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void fun(vector<int> &ar,int n)
{
	
}

int main() 
{
   
       ll n;  cin>>n;
       vector<ll> ar(n);
       for(ll i=0;i<n;i++)cin>>ar[i];
       	sort(ar.begin(), ar.end());
       vector<ll> v(n);
        ll k=0;
      for(int i=1;i<n;i=i+2)v[i]=ar[k++];
      for(int i=0;i<n;i=i+2)v[i]=ar[k++];	
       
        k=0;
       for(ll i=1;i<n-1;i++)
       	{
           if(v[i-1]>v[i] and v[i]<v[i+1])k++; 
       	}
       	cout<<k<<endl;
        for(ll k : v)cout<<k<<" ";
}