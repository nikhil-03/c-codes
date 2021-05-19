#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int merge(vector<ll> &ar,int l,int mid,int r)
{
	int i,j,k,inv=0;  
	int n1=mid-l+1,n2=r-mid;
	int left[n1],right[n2];
	for(int i=0;i<n1;i++) left[i]=ar[l+i];
	for(int i=0;i<n2;i++)right[i]=ar[mid+1+i];	
     i=0,j=0;k=l;
      while(i<n1 and j<n2)
      {
      	 if(left[i]<=right[j])ar[k++]=(left[i++]);
      	 else 
          {
          	ar[k++]=(right[j++]);
          	inv+=(n1-i);
          }
      }
      while(i<n1)
      {
      	ar[k++]=(left[i++]);
      }
      while(j<n2)
      {
      	ar[k++]=(right[j++]);
      }
      // for(auto a : temp) 
	return inv;
}

int _merge(vector<ll> &ar,int left,int right)
{
	int ans=0;
	
	if(right>left)
	{
		int mid=(left + right)/2;
		ans+=_merge(ar,left,mid);
	    ans+=_merge(ar,mid+1,right);
		ans+=merge(ar,left,mid,right);
	}
	return ans;
}
int main() 
{
   ll n;  cin>>n;
   vector<ll> ar(n); 
   for(ll i=0;i<n;i++)cin>>ar[i];
   
   cout<<_merge(ar,0,n-1);

   
}