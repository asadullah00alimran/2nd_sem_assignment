#include<stdio.h>

int main()
{

    int n, i;
    float sum = 0, x;

    printf("How Many Numbers : \n");
    scanf("%d", &n);



    for(i = 0; i < n; i++)
    {
        scanf(" %f", &x);
        sum += x;
    }
    printf("Average =  %.2f", (sum/n));

    return 0;
}
