#include<stdio.h>
int main()
{
float bill, dis, totalbill;
printf("Enter the bill amount:");
scanf("%f", &bill);
if(bill<1000)
{
    printf("no discount is applied");
}
else if(bill<=5000)
{
    printf("You enjoy 10 percent discount");
    dis = bill*10/100;
    totalbill = bill - dis;
}
else if(bill>5000)
{
    printf(" You received 20 percent discount");
    dis = bill*20/100;
    totalbill = bill - dis;
}
else
{
    printf("Invalid input");
}
printf("The total amount is : %f", bill);
printf("Bill after discount :%f", totalbill);

return 0;
}
