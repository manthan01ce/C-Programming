#include<stdio.h>
#include<conio.h>
void main()
{

int i, j, a, b;
clrscr();
printf("Enter the size of the table vertically :");
scanf("%d", &a);

printf("Enter the size of the table horizontally :");
scanf("%d", &b);

for(i =1; i<=a; i++)
{
for(j =1; j<=b; j++)
{
printf(" %d ", i*j);
}
printf("\n");

}
getch();
}