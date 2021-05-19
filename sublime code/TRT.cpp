#include <bits/stdc++.h>
using namespace std;
#define ll long long int

vector<ll> ar(20050);
int fun(int i,int l,int h,int d)
{
	if(l>h+1)
     {
        return 0;
     }
     int ans=ar[i]*d;
     int c1=fun(l,l+1,h,d+1);
     int c2=fun(h,l,h-1,d+1);
     return ans+max(c1,c2);
}

int main() 
{
   ll n; cin>>n;
   
   for(int i=0;i<n;i++)cin>>ar[i];
   cout<< max ( fun(0,1,n-1,1) , fun(n-1 , 0,n-2,1) )<<endl;
   
}


