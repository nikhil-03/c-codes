#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int fun(string &ar,ll n)
{
	ar[n]=ar[0]; ll c=0;
	for(int i=0;i<n;i++)
	{
       if(ar[i]==ar[i+1])c++;
	}
	return c/2;
}

int main() 
{
   int t; cin>>t; //cout<<t;
   while(t--)
   {
       ll n;  cin>>n; //cout<<n<<" ";
       string ar; cin>>ar;
       // cout<<ar<<" ";
       	cout<<fun(ar,n);
       cout<<endl;	
   }
}