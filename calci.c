#include<stdio.h>
int cal(float a, float b);
int main()
{
int r,a,b;
r = cal(a,b);
printf("%d",r);
}
int cal(float a,float b)
{
char operator;
int r;
printf("enter the operator(+,-,*,/)");
scanf("%c",&operator);
printf("enter the values of a,b");
scanf("%f%f",&a,&b);
if(operator=='+')
{
printf("result:%.2f+%.2f=%.2f",a,b,a+b);
}
else if(operator=='-')
{
printf("result:%.2f-%.2f=%.2f",a,b,a-b);
}
else if(operator=='*')
{
printf("result:%.2f*%.2f=%.2f",a,b,a*b);
}
else if(operator=='/') {
if(b!=0)
{
printf("result:%.2f/%.2f=%.2f",a,b,a/b);
}
else
{
printf("error zero is not valid"); }}
else 
{
printf("error invalid operator");
}
return r;
}

