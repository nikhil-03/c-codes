#include <bits/stdc++.h> 
using namespace std; 
#define pb push_back 
#define ll long long int
// int i,j,cnt=0;


void sortt(int ar[],int n)
{
   for(int i=0;i<n-1;i++)
   {
   	int x=i;
   	 for(int j=1+i;j<n;j++)
   	 {
   	 	if(ar[j]<ar[x])
         x=j;
   	 }
   	swap(ar[i],ar[x]);
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
	sortt(ar,n);

	for(int a : ar)cout<<a<<" ";
}