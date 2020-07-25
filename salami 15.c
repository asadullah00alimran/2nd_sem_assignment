#include <stdio.h>

int main() {
    int a, b, c;
    printf("Please Enter  values: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a>b)
    {
        printf("%d ", a);
    }
    if (b>a)
    {
        printf("%d ", b);
    }

   if (c>a)
    {
        printf("%d ", c);
    }


   return 0;
}
