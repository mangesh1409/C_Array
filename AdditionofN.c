/*    Accept N numbers from user and return summation of that all numbers
	  Input :
				N : 6
				Elements : 85  66  3  80  93  88
	   Output :     415																		*/

#include<stdio.h>
#include<stdlib.h>

int Addition(int arr[] ,int iLength );

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
	
	iRet=Addition(p,iSize);
	
	printf("Addition is %d \n",iRet);
	
	free(p);
	
	return 0;
}

int Addition(int arr[],int iLength)
{
	int iCnt=0, iSum=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		iSum=iSum+arr[iCnt];
	}
		return iSum;
}
	
	
