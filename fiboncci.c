#include<stdio.h>
int main()
{
int n,a=0,b=1,next;
printf("enter the value  of n");
scanf("%d",&n);
int count=1;
while(count<=n)
{
if(count==1)
{
printf("%d",a);
}
else if(count==2)
{
printf("%d",b);
}
else{
next=a+b;
printf("%d",next);
a=b;
b=next;
}
count++;
}
}
