#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main() 
{
   int n; cin>>n;
   vector<int> v1,v2;
   if((n*(n+1)/2)&1==1)
   {	cout<<"NO"; return 0; }
   else 
   	{
   		int k = (n*(n+1)/2); k=k/2;

   		if(n%4==0)
   		{
   			for(int i=1;i<=n/4;i++)
   			 {
   			 	v1.push_back(i); v1.push_back(n-i+1);
   			 }
   			 for(int i=n/4+1;i<v1[v1.size()-1];i++)
   			 	v2.push_back(i);
   		}
   		else if(n%4==3)
   		{
             v1.push_back(1); v1.push_back(2); v2.push_back(3);
             for(int i=4;i<=(n/4)+3;i++)
             {
             	v1.push_back(i); v1.push_back(n-i+4);
             } 
             for(int i=(n/4)+4;i<v1[v1.size()-1];i++)
             	v2.push_back(i);

   		}
         else { cout<<"NO"; return 0; }
   	}


    cout<<"YES"<<endl;
   	cout<<v1.size()<<endl;
   	for(auto a : v1)cout<<a<<" "; cout<<endl;
   	cout<<v2.size()<<endl;
   	for(auto a : v2)cout<<a<<" "; cout<<endl;   		
}