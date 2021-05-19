#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main() 
{
   int t; cin>>t;
   while(t--)
   {
       ll l,r;  cin>>l>>r;
       if(r/l>=2)cout<<"NO"; else cout<<"YES"; 
       cout<<endl;	
   }
}