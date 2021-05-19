#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void fun(int a,int b,int c,int d)
{
	cout<<max(a+b,c+d)<<endl;
}

int main() 
{
   int t; cin>>t;
   while(t--)
   {
       ll a,b,c,d; cin>>a>>b>>c>>d;
       fun(a,b,c,d);	
   }
}