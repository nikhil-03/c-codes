#include <iostream> 
using namespace std;
// int i,j,cnt=0;


void sortt(char ar[],int n)
{
   for(int i=1;i<n;i++)
   {
   	 int key=ar[i];
   	 int j=i-1;
   	  while(j>=0 and key<ar[j])
   	  {
        ar[j+1]=ar[j];
        	j=j-1;
   	  }
   	  ar[j+1]=key;
        for(int k=0;k<n;k++) { cout<<ar[k]; }//cout<<endl;
   }
}

int main()
{
   // printf("Enter number of digit\n");
	int n; scanf("%d",&n);
	char ar[n];
	for(int i=0;i<n;i++)
	{
      // printf(" enter the array elemnt \n");
		scanf("%c",&ar[i]);
	}
	sortt(ar,n);

	for(int a : ar)printf("%c",a );
}




// VIJETAKUMARI
// IVJETAKUMARI
// IJVETAKUMARI
// EIJVTAKUMARI
// EIJTVAKUMARI
// AEIJTVKUMARI
// AEIJKTVUMARI
// AEIJKTUVMARI
// AEIJKMTUVARI
// AAEIJKMTUVRI
// AAEIJKMRTUVI
// AAEIIJKMRTUV
// AAEIIJKMRTUV