#include <stdio.h>

int main()

{
    int x, y, t;


    printf("Enter two integers\n");
    scanf("%d%d", &x, &y);

    printf("Before Swapping\n");
    printf("First integer = %d\n",x);
    printf("Second integer = %d\n", y);


    t = x;
    x = y;
    y = t;

    printf("After Swapping\n");
    printf("First integer = %d\n",x);
    printf("Second integer = %d\n",y);


 return 0;


}

