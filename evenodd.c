#include<stdio.h>
int evenodd(int);
int main()	
{
int a;
printf("enter the values of a");
scanf("%d",&a);
evenodd(a);
}
int evenodd(int x)
{
if(x%2==0)
printf("even");
else
printf("odd");
}
