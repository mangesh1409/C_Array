/*	Accept N numbers from user and display all such numbers which are multiple of 11
	Input: 
				N: 10
				Elements: 11  21  88   32   44   77   99  110   120   66
	 Output:  11   88   44   77   99   110   66																*/
	
#include<stdio.h>
#include<stdlib.h>

void Multiple(int *, int);

int main()
{
	int iSize=0, iCnt=0;
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
	
	Multiple(p,iSize);
	
	free(p);
	
	return 0;
}

void Multiple(int arr[],int iLength)
{
	int iCnt=0, i=0;
	
	printf("Number which are multiple of 11 : ");
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(arr[iCnt]%11==0)
		{
			printf("%d  ",arr[iCnt]);
			i++;
		}
	}
	
	if(i==0)
	{
		printf("There is no such element");
	}
	printf("\n");
}
