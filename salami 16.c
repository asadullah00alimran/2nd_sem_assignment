#include <stdio.h>

int main() {
    int a, b, c;
    printf("Please Enter  values: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a>b&&b>a||a<b&&b<a)
    {
        printf("%d ", a);
    }
    if (b>a&&c>a||b<a&&c<a)
    {
        printf("%d ", b);
    }

   if (c>a&&a>b||c<a&&a<b)
    {
        printf("%d ", c);
    }


   return 0;
}

