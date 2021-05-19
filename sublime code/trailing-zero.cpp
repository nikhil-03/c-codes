#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main() 
{
    int n; cin>>n;
   int ans=0;
   	for(int i=5;n/i>=1;i=i*5)
   	{
       ans+=n/i;
   	}
   	cout<<ans;
}