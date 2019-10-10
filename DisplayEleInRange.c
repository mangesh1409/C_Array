/* Accept N number from user and accept range, Display all numbers from that range
	Input: 
				N: 10
				Elements:  34  56  98  67  23  50  123  74  34  90
				Start: 50
				End:  90
	Output:  56  67  50  74  90								*/
	
#include<stdio.h>
#include<stdlib.h>

void Display(int *, int, int, int);

int main()
{
	int iSize=0, iCnt=0, iStart=0, iEnd=0;
	int *p=NULL;
	
	printf("Enter number of elements: ");
	scanf("%d",&iSize);
	
	p=(int *)malloc(iSize * sizeof(int));
	
	if(p==NULL)
	{
		printf("Unable to allocate memory\n");
		return -1;
	}
	
	printf("Enter %d elements\n",iSize);
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter %d element: ",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	
	printf("Enter starting point: ");
	scanf("%d",&iStart);
	
	printf("Enter endinging point: ");
	scanf("%d",&iEnd);
	
	Display(p,iSize,iStart,iEnd);
	
	printf("\n");
	
	free(p);
	
	return 0;
}

void Display(int arr[],int iLength, int iStart, int iEnd)
{
	int iCnt=0, i=0;
	
	printf("Numbers between range %d to %d : ",iStart,iEnd);
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((arr[iCnt]>=iStart)&&(arr[iCnt]<=iEnd))
		{
			printf("%d ",arr[iCnt]);
			i++;
		}
	}
	
	if(i==0)
	{
		printf("No elements");
	}
}
