#include <bits/stdc++.h> 
using namespace std; 
#define pb push_back 
#define ll long long int

void merge(int ar[],int m,int l,int r)
{
   int i,j,k;
   cout<<m<<" "<<l<<" "<<r<<endl;
   int n1=m-l+1,n2=r-m;
   
   int left[n1],right[n2];
     for(int i=0;i<n1;i++)
      left[i]=ar[l+i];
     for(int i=0;i<n2;i++)
      right[i]=ar[m+1+i];

   i=0,j=0,k=l;

     while(i<n1 and j<n2)
     {
       if(left[i]<=right[j])
         ar[k++]=left[i++];
      else ar[k++]=right[j++];
     }
     while(i<n1)
     {
       ar[k++]=left[i++];
     }
     while(j<n2)
     {
       ar[k++]=right[j++];
     }
}


void mergesort(int ar[],int l,int r)
{
   if(l<r)
   {
      int m=(r-l)/2+l;
      mergesort(ar,l,m);
      mergesort(ar,m+1,r);

      merge(ar,m,l,r);
   }
}

int main()
{
	int n; cin>>n;
	int ar[n];
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	mergesort(ar,0,n-1);
   cout<<endl;

	for(int a : ar)cout<<a<<" ";
}