#include<stdio.h>
void main()
{
	int a,b[100],c,i;
	
	printf("How many terms are in your series= ");
	scanf("%d",&a);
	
	printf("\nEnter series= ");
	
	for(i=1;i<=a;i++)
	{
		printf("b[%d]= ",i);
		scanf("%d",&b[i]);
	}
	
	printf("\nWhich even term you want to find= ");
	scanf("%d",&c);
	
	for(i=1;i<=a;i++)
	{
		if(b[i]%2==0 && b[i]==c)
		{
			printf("%d is present at b[%d]",c,i);
			break;
		}
	}
}
