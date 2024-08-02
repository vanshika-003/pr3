#include<stdio.h>
#include<conio.h>

void main()
{
int n;
printf("enter a number:");
scanf("%d",&n);

int ld=n%10;
printf("last digit is :%d\n",ld);

while(n>9)
{
	n=n/10;
}
printf("first digit:%d\n",n);
printf("sum of the digit is :%d",ld+n);
}