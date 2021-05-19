#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main() 
{
   int t; cin>>t;

   while(t--)
   {
       ll n;  cin>>n;  
       vector<vector<int>> ans(n,vector<int> (n,0));
       for(int i=0;i<n;i++)
       {
       	 ans[i][i]=1; ans[i][n-1-i]=1;
       	 
       }

    if (n % 2) {
        ans[n / 2 - 1][n / 2] = 1;
        ans[n / 2][n / 2 + 1] = 1;
    }

       for(int i=0;i<n;i++)
       {
       	for(int j=0;j<n;j++)
       	{
       		cout<<ans[i][j]<<" ";
       	}cout<<endl;
       }	
   }
}