#include<stdio.h>
void cal();
void main()
{
	int m,n;
	printf("enter number= ");
	scanf("%d",&n);
	printf("enter multiple= ");
	scanf("%d",&m);
	
	cal(m,n);
	printf("\n");
}

void cal(int x,int y)
{
	if(x%y==0)
	{
		printf("multiple/number= %d",x/y);
	}
	
	else
	{
		printf("0");
	}
}



/*
enter number=10
enter multiple=2
0

or

enter number=40
enter multiple=80
multiple/number=2
*/
