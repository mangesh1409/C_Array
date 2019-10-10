/*    Accept N numbers from user and check whether that numbers contains 11 in it or not
	  Input :
				N : 10
				Elements : 85  66  3  45  66  65  66 13  66  32
				Output :		11 is Absent
				
				N : 10
				Elements : 21  23  1  45  23  11  23  11  34  87  
				Output :		11 is Present																	*/

#include<stdio.h>
#include<stdlib.h>

# define TRUE 1
# define FALSE 0

typedef int BOOL;

BOOL Check(int arr[] , int iLength);

int main()
{
	int iSize=0,  iCnt=0;
	BOOL bret=FALSE;
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
	
	bret=Check(p,iSize);
	
	if(bret==TRUE)
	{
		printf("11 is Prsent\n");
	}
	else
	{
		printf("11 is Absent\n");
	}
		
	free(p);
	
	return 0;
}

BOOL Check(int arr[],int iLength)
{
	int iCnt=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(arr[iCnt]==11)
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
