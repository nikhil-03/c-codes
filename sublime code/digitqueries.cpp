#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll fun(ll x, ll size) 
{
	ll count = 0;
	for(int i = 1; i < size; i++) 
	{
		ll num = (9ll * pow(10, i-1));
		count += (num * i);
	}
	ll mi = pow(10ll, size - 1);
	count += ((x - mi) * size) + 1;
	return count;
}

int main() 
{
   int t; cin>>t;
   while(t--)
   {
       ll n; cin>>n;
       ll sum=0,x=0;
       for(int i=1;i<=18;i++)
       {
       	 ll num=(9ll * pow(10,i-1));
       	 sum+=(num*i);
       	 if(n<=sum)
       	 {
       	 	x=i; break;
       	 }
       }
       ll lo=pow(10ll,x-1);
       ll hi=pow(10ll,x)-1;

       ll mid,ans=0,idx=0;

       while(lo<=hi)
       {
          mid=(lo+hi)/2;
          ll val=fun(mid,x);
          if(val<=n)
          {
          	idx=max(idx,val);
          	ans=max(ans,mid);
          	lo=mid+1;
          }
          else hi=mid-1;
       }
       string str = to_string(ans);
 
		for(auto ch : str) 
		{
			if(n == idx) 
			{
				cout << (ch - '0')  << "\n";
				break;
			}
			idx++;
		}
   } cout<<endl;
}