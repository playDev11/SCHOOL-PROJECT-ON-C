#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define f(x) (pow(x,3)-x-1)
int main ()
{
	float a,b,xo,xr,error;
	int i=0;
	printf("This is a program for Bisection Method of  		 x^3-x-1\n");
	printf("Enter the value of a: ");
	scanf("%f", &a);
	printf("Enter the value of b: ");
	scanf("%f", &b);
	printf("The initial value of f(a) is %4.5f and the 		value of f(b) is %4.5f\n",f(a),f(b));
if(f(a)*f(b)<0)
		{
		printf("NO\t\ta\t\tb\t\txr\t\tf(xr) \n");
    do
	{
    	xo=xr;
    	xr=(a+b)/2;
    	printf("%2d\t\t%4.5f\t\t%4.5f\t\t%4.5f\t\t%4.5f 		\n",i,a,b,xr,f(xr));
    		if (f(xr)==0)
    		{
    		printf("The real root of x: %4.3f\n",xr);
			}
			else if((f(a)*f(xr))<0)
			{
				b=xr;
			}
			else
			a=xr;
			error = fabs(xr-xo);
				if(i==i+1)
				{
				printf("----\n");
				}
    			else
    			;
	}
while (error > 0.00001);
	printf("Approximate Root is %4.5f", xr);
	}
	else
	{
		printf("Invalid Interval exit");
		}
	return 0;
}
