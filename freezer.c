#include <stdio.h>
int main()

{ double t;
double temp;
printf("please enter time\n");
scanf("%lf",&t);
temp =((4*t*t)/(t+2))-20;
printf("your temperature is %lf",temp);
}
