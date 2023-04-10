#include <stdio.h>
void main()
{int a,b,c;
printf("enter the first number\n");
scanf("%d",&a);
printf("enter the second number\n");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("your swap number1%d\n",a);
printf("your  swap number2%d\n",b);
}
