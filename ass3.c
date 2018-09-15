#include<stdio.h>
#include<math.h>
void triangle();
void main()
{
	int a,b,c,semi,area;
	printf("enter a= ");
	scanf("%d",&a);
	printf("enter b= ");
	scanf("%d",&b);
	printf("enter c= ");
	scanf("%d",&c);
	semi= (a+b+c)/2;
	area= sqrt(semi*(semi-a)*(semi-b)*(semi-c));
	triangle(area);
	printf("\n");
}

void triangle(int area)
{
	
	if(area<=0)
	{
		printf("\n0");
	}
	
	else if(area>0)
	{
		printf("\n1");
	}
}



/*
enter a=3
enter b=3
enter c=3
1

or

enter a=3
enter b=15
enter c=1
0
*/
