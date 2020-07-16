#include<stdio.h>
int main()

{
    int x,y,sum,sub,mul,div,mod;

    printf("First number: ");
    scanf("%d",&x);

    printf("Second number: ");
    scanf("%d",&y);

    sum = x+y;
    printf("Sum = %d\n",sum);

    sub = x-y;
    printf("Difference = %d\n",sub);

    mul = x*y;
    printf("Product = %d\n",mul);

    div = x/y;
    printf("Quotient = %d\n",div);

    mod = x%y;
    printf("Modulus = %d",mod);

    return 0;
}

