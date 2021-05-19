#include <bits/stdc++.h> 
using namespace std; 
#define pb push_back 
#define ll long long int

int main()
{
   int i,n,qt,cnt=0,temp,sq=0,bt[10],wt[10],tat[10],rem_bt[10];
float awt=0,atat=0;
cin>>n;
for(i=0;i<n;i++)
{
	cin>>bt[i];  rem_bt[i]=bt[i];
}
cin>>qt;

while(1)
{
	for(i=0,cnt=0;i<n;i++)
	{
		temp=qt;
		if(rem_bt[i]==0)
			{cnt++; continue; }
		if(rem_bt[i]>qt)
		{
			rem_bt[i]-=qt;
		}
		else
			if(rem_bt[i]>=0)
			{
				temp=rem_bt[i];
				rem_bt[i]=0;
			}
			sq=sq+temp;   cout<<tat[i]<<" ";
			tat[i]=sq; 
		
	}
	if(cnt==n){break;}
}
for(int i=0;i<n;i++)
{
	wt[i]=tat[i]-bt[i];
	awt+=wt[i];
	atat+=tat[i];
}
cout<<endl<<endl;
    for(int i=0;i<n;i++)
    {
    	cout<<bt[i]<<" "<<wt[i]<<" "<<tat[i]<<endl;
    }
}