/*    Accept N numbers from user and return product of all odd numbers
	  Input :
				N : 6
				Elements : 85  66  3  80  93  88
	  Output :     	23715																	*/

#include<stdio.h>
#include<stdlib.h>

int Product(int *, int);

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
	
	iRet=Product(p,iSize);
	
	printf("Product of odd numbers is %d \n",iRet);
		
	free(p);
	
	return 0;
}

int Product(int * arr,int iLength)
{
	int iCnt=0, iMul=1, i=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(arr[iCnt]%2!=0)
		{
			iMul=iMul*arr[iCnt];
			i++;
		}
	}
	
	if(i==0)
	{
		return 0;
	}
	else
	{
		return iMul;
	}
}
	
	
