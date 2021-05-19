#include <bits/stdc++.h> 
using namespace std; 
#define pb push_back 
#define ll long long int
// int i,j,cnt=0;


// void sortt(int ar[],int n)
// {
//    for(int i=0;i<n-1;i++)
//    {
//       for(int j=0;j<n-i-1;j++)
//       {
//          if(ar[j]>ar[j+1])
//             swap(ar[j],ar[j+1]);
//       }
//    }
// }
void sortt(int ar[],int n)
{
   if(n==1)
      return;
   for(int i=0;i<n-1;i++)
   {
      if(ar[i]>ar[i+1])
         swap(ar[i],ar[i+1]);
   }
   sortt(ar,n-1);
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