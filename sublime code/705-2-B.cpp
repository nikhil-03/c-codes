#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define pb push_back

int x=100;
int y[10]={ 0,1,5,x,x,2,x,x,8,x };

void solve()
{
   int m,h; cin>>h>>m;
   int a1,a2; char ch;
   cin>>a1>>ch>>a2; 
   while(1)
   {
   	 int b1=y[a2%10]*10 + y[a2/10];
   	 int b2=y[a1%10]*10 + y[a1/10];

   	 if(b1<h and b2<m)
   	 {
   	 	printf("%02d:%02d\n", a1, a2);
   	 	break;
   	 }
    if(++a2==m)a2=0 , a1=(a1+1)%h ;
   } 
}

int main() 
{
   int t; cin>>t;
   while(t--)
   {
   	  solve();
   }
}