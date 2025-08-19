#include<stdio.h>
void main()
{

int matchstick=21, input, computer_choice;
    do
    {
  X :  printf("Enter the number of matchstick :");
        scanf("%d", &input);
        if(input<0 || input>4)
        {
            printf("Invalid output\n");
            goto X;
        }
        matchstick = matchstick - input;
        printf("Remaining matchstick : %d\n", matchstick);
        computer_choice = 5 - input;
        printf("Computer choose : %d\n", computer_choice);
        matchstick = matchstick - computer_choice;
        printf("Number of remaining matchstick :%d\n", matchstick);

    }
while(matchstick>1);
{
    printf("Computer won!!");
}

}
