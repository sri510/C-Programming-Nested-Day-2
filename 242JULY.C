/* find max in 3 numbers */
#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,n3;
clrscr();
printf("Enter a three number: ");
scanf("%d%d%d",&n1,&n2,&n3);
if(n1>=n2)
{
if(n1>=n3)
printf("%d is max",n1);
else
printf("% is max",n3);
}
else
{
if(n2>=n3)
printf("%d is max",n2);
else
printf("%d is max",n3);
}
getch();
}