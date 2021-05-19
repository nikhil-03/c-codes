#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (1)
    {
        scanf("%d",&n);
        if (n==0)
            return  0;
        char type[10];
        int array[n+1],actual[n+1],flag=0;
        
        for (int i=1; i<n+1; i++)
        {
            scanf("%d %s",&array[i],type);
            if (type[0]=='f')
                actual[i]=0;
            else
                actual[i]=1;
        }
        for (int i=1; i<=n; i++)
        {
            bool ans[n+1],mark[n+1];
            memset(ans,0,sizeof(ans));
            memset(mark,0,sizeof(mark));
            bool save;
           if (mark[i]==0)
            {
                mark[i]=1;
                ans[i]=1;
                int temp=array[i];
                bool temp1=ans[i];
                save=actual[i];
                while (!mark[temp])
                {
                    if (temp1==1)
                        ans[temp]=save;
                    else
                        ans[temp]=!save;

                    mark[temp]=1;
                    temp1=ans[temp];
                    save=actual[temp];
                    temp=array[temp];
                }
                if (temp1==1 && save!=ans[temp])
                    flag=1;
                else if(temp1==0 && save==ans[temp])
                    flag=1;
            }
            if (flag==1)
                break;
        }
        if (flag==0)
            printf("NOT PARADOX\n");
        else
            printf("PARADOX\n");
    }
}