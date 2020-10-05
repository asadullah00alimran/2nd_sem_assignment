#include <stdio.h>

int main()

{

    int n, ulimit, llimit, sum = 0;

    printf("Enter first No : ");

    scanf("%d", &ulimit);

    printf("Enter second No : ");

    scanf("%d", &llimit);

    n = ulimit;

    if( (ulimit % 2) == 0)
        n = ulimit + 1;

    for(; n<= llimit; n += 2)

    {

        sum = sum + n;

    }

    printf("sum of all odd numbers between %d and %d is: %d", ulimit, llimit, sum);

}
