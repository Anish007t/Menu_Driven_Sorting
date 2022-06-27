#include<stdio.h>
#include<stdlib.h>
#define print(i,n)for((i)=(0);(i)<(n);(i)++)
void bub(int* ar,int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>=0;j--)
			if(*(ar+j)>*(ar+j-1))
			{
				temp=*(ar+j);
				*(ar+j)=*(ar+j-1);
				*(ar+j-1)=temp;
			}
	}
}
void sel(int* ar,int n)
{
	int i,j,min,temp;
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
			if(*(ar+j)<*(ar+min))
				min=j;
		temp=*(ar+i);
		*(ar+i)=*(ar+min);
		*(ar+min)=temp;
	}
}
int main()
{
	int* ar;
	int n,i,ch;
	printf("\nEnter how many elements do u want=");
	scanf("%d",&n);
	ar=(int*)malloc(n*sizeof(int));
	if(ar==NULL)
	{
		printf("\nMemory allocation unsuccesful.");
		exit(0);
	}
	printf("\nEnter the elements=");
	for(i=0;i<n;i++)
		scanf("%d",(ar+i));
	printf("\nThe array is=");
	print(i,n)
		printf("%d ",*(ar+i));
	printf("\n.................................................");
	printf("\n. Press 1 for Descending order(Bubble sort).    .");
	printf("\n. Press 2 for Ascending order(Selection sort).  .");
	printf("\n.................................................");
	printf("\nEnter your choice=");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			bub(ar,n);
			printf("\nThe sorted array is=");
			print(i,n)
				printf("%d ",*(ar+i));
			break;
		case 2:
			sel(ar,n);
			printf("\nThe sorted array is=");
			print(i,n)
				printf("%d ",*(ar+i));
			break;
		default:
			printf("\nWrong choice.");
			exit(0);
	}
	return 0;
}
