#include<stdio.h>
#include<conio.h>
void main()
{
int n,a=0;
clrscr();
printf("Enter the integer:");
scanf("%d",&n);
while(n)
{
n=n/10;
a++;
}
printf(" total count=%d",a);
getch();
}
