#include<stdio.h>
void swap(int *,int *);
main()
{
int a,b;
printf("Enter a and b values\n");
scanf("%d%d",&a,&b);
printf("Values before swap\na=%d\nb=%d\n",a,b);
swap(&a,&b);
printf("Values after swap\na=%d\nb=%d\n",a,b);
}
void swap(int *x, int *y)
{
int t;
t=*x;
*x=*y;
*y=t;
}
