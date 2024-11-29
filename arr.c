#include<stdio.h>
int display(int marks[]);
int main()
{
float avg;
int marks[5]={1 ,2 ,3 ,4 ,5};


display(marks);
}
int display(int marks[])
{
int i;
for(i=0;i<=4;i++)
{
printf("%d",marks[i]);
}
}

