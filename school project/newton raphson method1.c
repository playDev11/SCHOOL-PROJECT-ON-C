#include<stdio.h>
#include<math.h>
#define f(x) x - 2 + log(x)
#define fp(x) 1 + 1 /x

int main()
{
	
   float x0,xn,d,e;
   printf("input x0-->") ;
   scanf("%f",&x0);
   int i=0;
   
    do
	{
	i++;
   	d=f(x0);
   	printf("the value for f(x0) = %f : \n\t ",d);
   	e=fp(x0);
   	printf("the value for fp(x0) = %f : \n\t ",e);
   	
   	xn=x0-d/e;
   	printf("the value for xn = %.4f\n\t",xn);
   	
   	x0=xn;
   	printf("the new value of xn by setting x0=xn = %.4f : \n\t",x0);
   	
	printf("\n no of iteration %i \n\t",i);
	
    }
    while(i<=4);
    printf("the correct root is = %.4f",xn);
}
