#include<stdio.h>
void main()
{
int marks;
char g;
 X :printf("Enter the marks :");
scanf("%d", &marks);
if(marks>0 && marks<100)
{
 g =(marks>=90)? 'A' : (marks>=80) ? 'B' : (marks>=70) ? 'C' : (marks>=60)? 'D' : 'Fail' ;
}
else
{
    printf("Invalid input\n");
}
if ('A' == g)
{
    printf(" Your GPA is 4.0\n");
}
else if ('B' == g)
{
    printf("Your GPA is 3.0\n");
}
else if('C' == g)
{
    printf("Your GPA is 2.0\n");
}
else if('D' == g)
{
    printf("Your GPA is 1.0\n");
}
else
{
    printf("Your GPA is 0.0\n You are fail\n");
}
goto X;
}
