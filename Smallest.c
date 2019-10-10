/* Accept N number from user and return smallest number from them
	Input:	             N:   6
				Elements:   85  66  103  93  65  104
	Output:					65													*/
	
#include<stdio.h>
#include<stdlib.h>

int Smallest(int *, int);

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
	
	iRet=Smallest(p,iSize);
	
	printf("Smallest number is %d \n",iRet);
	
	return 0;
}

int Smallest(int * arr, int iLength)
{
	int i=0, iMin=arr[0];
	
	for(i=0;i<iLength;i++)
	{
		if(arr[i]<iMin)
		{
			iMin=arr[i];
		}
	}
	
	return iMin;
}	
	
	
		
	
	 
