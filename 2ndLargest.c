/* Accept N number from user and return 2nd largest number from them
	Input:	             N: 6
				Elements:  85  66  103  93  88  104
	Output:					103													*/
	
#include<stdio.h>
#include<stdlib.h>

int Largest(int *, int);

int main()
{
	int iSize=0,  iRet=0, iCnt=0;
	int *p=NULL;
	
	printf("Enter number of elements: ");
	scanf("%d",&iSize);
	
	p=(int *)malloc(iSize*(sizeof(int)));
	
	if(p==NULL)
	{
		printf("Unable to allocate memory\n ");
		return -1;
	}
	
	printf("Enter %d elements\n",iSize);
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter %d element: ",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	
	iRet=Largest(p,iSize);
	
	printf("2nd Largest number is %d \n",iRet);
	
	return 0;
}

int Largest(int * arr, int iLength)
{
	int i=0, iMax1=arr[0], iMax2=0;
	
	for(i=0;i<iLength;i++)
	{
		if(arr[i]>iMax1)
		{
			iMax1=arr[i];
		}
	}
	
	iMax2=arr[0];
	
	for(i=0;i<iLength;i++)
	{
		
		if((arr[i]<iMax1)&&(arr[i]>iMax2))
		{
			iMax2=arr[i];
		}
	}
	
	return iMax2;
}	
	
	
		
	
	 
