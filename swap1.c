#include <stdio.h>
void main()
{int a,b,c;
printf("enter your first number\n");
scanf("%d",&a);
printf("enter your second number\n");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("your 1swapnumber is%d",a);
printf("your 2swapnumbers is%d",b);
}
