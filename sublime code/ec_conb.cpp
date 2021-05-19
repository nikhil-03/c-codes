#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void fun(int n)
{
	int x=0;
	n=n>>1;
	int count = 31;
	while(n)
	{
		x=x<<1;
		x= x | n&1;
		n=n>>1;
	}
	cout<<x<<endl;
}

int main() 
{
   int t; cin>>t;
   while(t--)
   {
       ll n;  cin>>n;
       if(!(n&1))  fun(n); else cout<<n<<endl; 
   }
}