#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> ar
#define pb push_back



int main() 
{
	int n,m; cin>>n>>m;
   char ar[n][m];
   for(int i=0;i<n;i++)
   {
   	for(int j=0;j<m;j++)
   	{
   		cin>>ar[i][j];
   	}
   }

   int cnt=0;
   int i=0,j=0;
   while(i<n and j<m)
   {
   	     if(ar[i][j]=='*')cnt++;
   	  
         if(i+1<n and ar[i+1][j]=='*')
         {
         	i++;
         }
         else if(j+1<m and ar[i][j+1]=='*')
         {
         	j++;
         }
         else if( n-i > m-j )i++;
         else j++;
   	  
   	  
   }
   cout<<cnt;
}