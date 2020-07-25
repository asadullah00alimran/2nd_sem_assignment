#include<stdio.h>

int main()

{
    int number1,number2;

    printf("Enter numbers: ");
    scanf("%d%d",&number1,&number2);

    if(number1 > number2)
       {

        printf("\nMax = %d ",number1);
        printf("Min = %d ",number2);
       }
    else
       {

        printf("\nMax = %d ",number2);
        printf("Min = %d\n ",number1);

       }

        return 0;


}
