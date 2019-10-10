/*    Accept N numbers from user and one another number as No and return first occurance of that number
	  Input :
				N : 10
				Elements : 85  66  3  45  66  65  66 13  65 32
				No:	65
	  Output : 6		     																		*/

#include<stdio.h>
#include<stdlib.h>

int FirstOccurance(int *, int , int);

int main()
{
	int iSize=0, iRet=0, iCnt=0, iValue=0;
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
	
	printf("Enter number to search: ");
	scanf("%d",&iValue);
	
	iRet=FirstOccurance(p,iSize,iValue);
	
	if(iRet==-1)
	{
		printf("There is no such element\n");
	}
	
	else
	{	
		printf("%d is first occur at position %d \n",iValue,iRet+1);
	}
		
	free(p);
	
	return 0;
}

int FirstOccurance(int * arr, int iLength, int iNo)
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
		return -1;
	}
	else
	{
		return iCnt;
	}
}
