#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main() 
{
   int t; cin>>t;
   while(t--)
   {
       ll y,x; cin>>y>>x;

       if(x>y)
       {
       	 if(x&1){cout<<x*x-y+1<<endl;  }
       	 else 
       	 {
            x--; cout<<x*x+y<<endl;
       	 }
       }
       else if(x<=y)
       {
       	 if(!(y&1)){ cout<<y*y-x+1<<endl;  }
       	 else 
       	 {
       	 	y--;
       	 	cout<<y*y+x<<endl;
       	 }
       }
      
   }
}