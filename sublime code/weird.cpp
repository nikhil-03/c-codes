#include <iostream>
#include <limits.h>
using namespace std;
int burst[100],no_of_burst[100],input_burst[100],output_burst[100],n;  bool done[100];
int sym_max=0;


void single()
{
	printf("With Single input output variable \n");
	printf("Sequence: \n");
	int min=0;
    for(int i=0;i<sym_max;i++)
    {
        for(int j=0;j<n;j++)
        {
        	if(input_burst[j]==i)
        	{
                printf("process no. ");
        		printf("%d\n",j+1 );
        	}
        }
    }
}

void multiple()
{
    printf("With Multiple input output variable \n");
	printf("Sequence: \n");
	int min=0;
    for(int i=0;i<sym_max;i++)
    {
        for(int j=0;j<n;j++)
        {
        	if(input_burst[j]==i and burst[j]>0 and input_burst[j]<output_burst[j])
        	{
                printf("process no. ");
        		printf("%d\n",j+1 );
        		input_burst[j]++;
        		burst[j]--;
        	}
        }
    }
}

int main() 
{
   int i;
   printf("Enter the number of process \n");
   scanf("%d",&n);
   

   printf("Input burst time for each process \n");
   for(i=0;i<n;i++)
   {
   	scanf("%d",&burst[i]);
   }

   printf("Input the no of burst for each process\n");
   for(i=0;i<n;i++)
   {
   	scanf("%d",&no_of_burst[i]);
   }

   printf("Input and Output of burst time for each process sparated by space\n");
   for(i=0;i<n;i++)
   {
   	scanf("%d",&input_burst[i]);
   	scanf("%d",&output_burst[i]);
   	sym_max=max(sym_max,input_burst[i]);
   	sym_max=max(sym_max,output_burst[i]);
   }
   single();
   multiple();
}