#include<stdio.h>

float main()
{
    float a,b, buy,sell,profit;

    printf("Enter the buy :");
    scanf("%f",&buy);

    printf("Enter the sell :");
    scanf("%f",&sell);

    a=(buy-sell);
    b=(a/buy);
    profit=(b*100);

    printf("\nprofit is %.2f %\n",profit);

    return 0;

}
