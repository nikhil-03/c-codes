#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t; cin>>t;
   for(int tt=0;tt<t;tt++)
   {
      int n,b; cin>>n>>b;
      int ar[n],c=0;
      for(int i=0;i<n;i++)cin>>ar[i];
      sort(ar,ar+n);
      for(int i=0;i<n;i++)
      {
          
          if(b-ar[i]>=0)
             {
                c++;
                b=b-ar[i];
             } 
            else break;
      }
      cout<<"Case #"<<tt+1<<": "<<c<<endl;
   }
}