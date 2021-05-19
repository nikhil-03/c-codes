#include <bits/stdc++.h> 
using namespace std; 
#define pb push_back 
#define ll long long int
int i,j,cnt=0;

void heapify(int ar[],int i,int n)
{
   int largest=i;
   int left=2*i+1;
   int right=2*i+2;
   if(left<n and ar[left]>ar[largest])
   {
      largest=left;
   }
   if(right<n and ar[right]>ar[largest])
   {
   	  largest=right;
   }
    if(largest!=i)
    {
    	swap(ar[i],ar[largest]);
    	heapify(ar,largest,n);
    }
}
int main()
{
   int n; cin>>n; int ar[n];
   for(int i=0;i<n;i++)
   {
   	 cin>>ar[i];
   }

    for(int i=n/2-1;i>=0;i--)   //n=3
    {
    	heapify(ar,i,n);
    }
    for(int a: ar)cout<<a<<" "; cout<<endl;
    for(int i=n-1;i>0;i--)
    {
    	swap(ar[0],ar[i]);
    	heapify(ar,0,i);
    }
    for(int a: ar)cout<<a<<" ";
}