#include<stdio.h>
int main()
{double volume, hr, a, min, b;
printf("enter the some ammount\n");
scanf("%lf",&a);
volume=a;
printf("enter mins\n");
scanf("%lf",&min);
hr=(min/(double)60);
b=volume/hr;
printf("your value is %lf milli liter per hr",b);
}
