#include<stdio.h>
int matri1();
int matri2();
int add();
int main()
{
matri1();
matri2();
add();
}
int matri1()
{
int mat1[2][3]={{1,2,3},{4,5,6}};
int i,j;
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
printf("%d",mat1[i][j]);
}
}
}
int matri2()
{
int mat2[2][3]={{4,5,6},{1,2,3}};
int i,j;
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
printf("%d",mat2[i][j]);
}
}
}
int add()
{
int i,j,a[i][j],mat1[i][j],mat2[i][j];
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
printf("%d",a[i][j]);
a[i][j]=mat1[i][j]+mat2[i][j];
printf("%d",a[i][j]);
}
}
}
