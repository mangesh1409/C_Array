/*	Accept N numbers from user and display all such numbers which are even and divisible by 5.
	Input: 
				N: 10
				Elements: 85  50  24  100  110   28   30   32   21   40
	Output:  50  100  110  30  40																*/
	
#include<stdio.h>
#include<stdlib.h>

void Divisible(int *, int);

int main()
{
	int iSize=0,  iCnt=0;
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
	
	Divisible(p,iSize);
	
	free(p);
	
	return 0;
}

void Divisible(int arr[],int iLength)
{
	int iCnt=0, i=0;

	printf("Number which are even and divisible by 5 : ");
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((arr[iCnt]%5==0)&&(arr[iCnt]%2==0))
		{
			printf("%d  ",arr[iCnt]);
			i++;
		}
	}
	
	if(i==0)
	{
		printf("0");
	}
	printf("\n");
}
