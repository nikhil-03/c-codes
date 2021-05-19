#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n,k; cin>>n>>k;
		 if(n==3)
		{
			cout<<1<<" "<<1<<" "<<1<<endl;
		}
		else if(n==4)
		{
			cout<<1<<" "<<1<<" "<<2<<endl;
		}
		else if(n==5)
		{
			cout<<1<<" "<<2<<" "<<2<<endl;
		}
		else if(n%2==0)
		  {
		  	if(n%4!=0)
			 cout<<(n/2)-1<<" "<<(n/2)-1<<" "<<2<<endl;
			else
				 cout<<(n/2)<<" "<<(n/4)<<" "<<n/4<<endl;
			 
		  }
		else 
        {
           cout<<n/2<<" "<<n/2<<" ";
           cout<<n-(2*(n/2))<<endl;

		}

		
	}
}