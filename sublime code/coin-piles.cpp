#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
   int t; cin>>t;
   while(t--)
   {
       ll a,b; cin>>a>>b;
       
       if((2*a-b>=0 and (2*a-b)%3==0) and (2*b-a>=0 and (2*b-a)%3==0))
          cout<<"YES"<<endl;
       else cout<<"NO"<<endl;	
   }
}   