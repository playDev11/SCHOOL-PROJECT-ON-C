#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
	int x1,x2,x3;
	printf("Please input the values of x\n");
	scanf("%d%d%d",&x1,&x2,&x3);
	
	float xf1,xf2,xf3;
	float xi1 = x1;
	float xi2 = x2;
	double xi3 = x3;
	int i;
	for(i = 0;i <= 20;i++)
	{
		xf1 = (pow(xi1,2) + 2) / 4;
		xf2 = (pow(xi2,2) + 2) / 4;
		xf3 = (pow(xi3,2) + 2) / 4;
		
		printf("X_%i \= %.4f|%.4f|%.4f\n",i,xf1,xf2,xf3);
		xi1 = xf1;
		xi2 = xf2;
		xi3 = xf3;
	}
	if(xf1 = xf2)
	{
		float m1 = (xf1 = xf2);
		printf("X = %.4f",m1);
	}
	else if(xf1 = xf3)
	{
		float m2 = (xf1 = xf3);
		printf("X = %4f",m2);
	}
	else if(xf2 = xf3)
	{
		float m3 = (xf2 = xf3);
		printf("X = %.4f",m3);
	}
	else 
	{
		float m4 = (xf1 = xf2 = xf3);
		printf("X = %.4f",m4);
	}
}
