#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll fact (ll k)
{
	if(k==0)return 1;
	return k*fact(k-1);
}

void fun(ll n)
{
	// cout<<fact(5);
	cout<<(fact(n/2-1)*fact(n/2-1))  * (  fact(n) / (fact(n/2)*fact(n/2)) )/2;
}

int main() 
{
   ll n;  cin>>n;
   fun(n);	
}