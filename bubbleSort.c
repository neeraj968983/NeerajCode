#include<stdio.h>
#include<conio.h>

void main()
	{	
		int number,i,arr[25],j,temp;
		printf("how many elements are there : ");
		scanf("%d",&number);
		printf("Type elements\n");
		for (i=0; i<number; i++)
		{
			scanf("%d",&arr[i]);	
		}
		
		for(i=0; i<(number-1); i++)
		{
			for(j=0;j<(number-i-1);j++)
			{
				if(arr[j]> arr[j+1])
				{
					temp =arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
				}	
			}
		}
		printf("\nSorted Array is :\n");
		for(i=0;i<number;i++)
		{
			printf("%d ",arr[i]);
		}
	}
