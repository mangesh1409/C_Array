/*    Accept N numbers from user and return difference between summation of even numbers and summation of odd numbers.
	  Input :
				N : 6
				Elements : 85  66  3  80  93  88
	  Output : 53 (234 - 181)													*/

#include<stdio.h>
#include<stdlib.h>

int Difference(int * , int);

int main()
{
	int iSize=0, iRet=0, iCnt=0;
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
	
	iRet=Difference(p,iSize);
	
	printf("Difference is %d \n",iRet);
	
	free(p);
	
	return 0;
}

int Difference(int * arr,int iLength)
{
	int iCnt=0, iEsum=0, iOsum=0, iDiff=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((arr[iCnt]%2)==0)
		{
			iEsum=iEsum+arr[iCnt];
		}
		else
		{
			iOsum=iOsum+arr[iCnt];
		}
	}
		iDiff=iEsum-iOsum;
		
		return iDiff;
}
	
	
