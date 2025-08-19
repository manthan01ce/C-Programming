#include<stdio.h>
void main()
{
int timeinput;
 X: printf("Enter the time for countdown :");
scanf("%d", &timeinput);
if(timeinput>0)
{
while(timeinput>=0)
{
printf("%d\n", timeinput);
timeinput--;
sleep(1);
}
printf("countdown completed\n");
}
else
 {
 printf("Invalid input");
 goto X;
}
}


