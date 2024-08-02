#include<stdio.h>
#include<conio.h>

void main()
{
int num,count=0;
printf("enter a num:");
scanf("%d",&num);
do
{
num/=10;
count++;
}while(num!=0);
printf("total number of digits:%d\n",count);
}