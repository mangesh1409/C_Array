/*    Accept N numbers from user and one another number as No and check
	   wheather that number is present in it or not 
	  Input :
				N : 10
				Elements : 85  66  3  45  66  65  66 13  65 32
				No:	65
	Output : Number is Present	     												*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int *, int, int);

int main()
{
	int iSize=0,  iCnt=0, iValue=0;
	int *p=NULL;
	BOOL bret=FALSE;
	
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
	
	printf("Enter number to search: ");
	scanf("%d",&iValue);
	
	bret=Check(p,iSize,iValue);
	
	if(bret==TRUE)
	{
		printf("Number is Present\n");
	}
	else
	{	
		printf("Number is Absent\n");
	}
		
	free(p);
	
	return 0;
}

BOOL Check(int * arr,int iLength, int iNo)
{
	int iCnt=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(arr[iCnt]==iNo)
		{
			break;
		}
	}
	
	if(iCnt==iLength)
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
}
