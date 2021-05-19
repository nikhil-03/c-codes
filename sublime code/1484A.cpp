#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() 
{
   int t; cin>>t;
   while(t--)
   {
     lli x,y,xi=0,yi=0; cin>>x>>y;
     lli r=0,l=0,u=0,d=0;
     lli rr=0,ll=0,uu=0,dd=0;
     string s; cin>>s;
     
     for(auto a : s)
     {
       if(a=='R')r++;
       if(a=='L')l++;
       if(a=='U')u++;
       if(a=='D')d++;
     }

     while(xi!=x or yi!=y)
     {
        if(xi<x){ rr++; xi++;  } 
        if(xi>x){ ll++; xi--;  }
        if(yi<y){ uu++; yi++;  }
        if(yi>y){ dd++; yi--;  }
     }
     if(rr<=r and ll<=l and uu<=u and dd<=d)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
   }
}