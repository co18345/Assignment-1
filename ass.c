#include<stdio.h>
void new(int x,int y,int z);
void main()
{
	int a,b,c;
	printf("enter a= ");
	scanf("%d",&a);
	
	printf("enter b= ");
	scanf("%d",&b);
	
	printf("enter c= ");
	scanf("%d",&c);
	
	new(a,b,c);
	printf("\n");
}

void new(int x,int y,int z)
{
	
	if(x==y || x==z || y==x || y==z || z==x || z==y)
	{
		printf("0");
	}

	else
	{
		printf("1");
	}
	
}



/*output

enter a= 10
enter b= 20
enter c= 30
1

or

enter a=10
enter b=20
enter c=10
0
*/
