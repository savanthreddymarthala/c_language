#include<stdio.h>
int div();
int sub();
int main()
{
div();
sub();
}
int div()
{
int a,b,s;
printf("enter tha values of a b");
scanf("%d%d",&a,&b);
s=a/b;
printf("%d",s);
}
int mul();
int sub()
{
int a,b,s;
printf("\nenter the value of a b");
scanf("%d%d",&a,&b);
s=a-b;
printf("%d",s);
mul();
}
int mul()
{
int a,b,s;
printf("\nenter the values of a,b");
scanf("%d%d",&a,&b);
s=a*b;
printf("%d",s);
}
