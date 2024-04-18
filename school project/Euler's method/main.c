#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int f(int t, int y){
    return y - (t*t) +1;
}

int main(){
    double a, b, n, h, w[0], ti, y[0];
    int i  =0;

    printf("enter the value of a, b,n: ");
    scanf("%lf%lf%lf", &a, &b, &n);

    h = (b-a)/n;

    printf("i  |  t  |  w  |  y  | /y-w/\n");

    for(i = 0; i <=10; i++){
        ti = a + (i*h);

        w[0] = 0.5;

        y[i] = pow(ti +1, 2) - 0.5 * pow(2.7183, ti);

        w[i+1] = w[i] + h * f(ti, w[i]);

        printf("%d  |  %d  |  %d  |  %d  | %d  \n",i, ti, w[i], y[i], y[i] - w[i]);

    }
}
