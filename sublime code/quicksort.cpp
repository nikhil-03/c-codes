#include <bits/stdc++.h> 
using namespace std; 
#define pb push_back 
#define ll long long int

int partition(int ar[],int l,int r)
{
   int pivot=ar[r];
   int i=l-1;
   for(int j=l;j<=r;j++)
   {
      if(ar[j]<pivot)
      {
        i++;
        swap(ar[i],ar[j]);
      }
   }
   swap(ar[i+1],ar[r]);
   return i+1;
}


void quicksort(int ar[],int l,int r)
{
   while(l<r)
   {
      int pi=partition(ar,l,r);
       quicksort(ar,l,pi-1);
       quicksort(ar,pi+1,r);
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
	 quicksort(ar,0,n-1);
   cout<<endl;

	for(int a : ar)cout<<a<<" ";
}