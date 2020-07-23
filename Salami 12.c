#include<stdio.h>

int main()

{
    int number;

    printf("Enter a number :");
    scanf("%d",&number);


    if(number % 2 == 0)
        printf("\n%d  is even",number);


    else
        printf("\n%d is odd",number);

    printf("\n");


    return 0;
}
