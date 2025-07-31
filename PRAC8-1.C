#include<stdio.h>
#include<conio.h>
void main()
{
int age;
char ch;
clrscr();
printf("Enter your age :");
X: scanf(" %d", age);
(age> 18) ? printf("eligible") : printf("not eligible");

scanf("%c", &ch);
if (ch == 'y')
{
 goto X;
}

getch();

}



