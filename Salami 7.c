#include<stdio.h>

int main()

{
    int total_days,years,weeks,days;

    printf("Enter days: ");
    scanf("%d",&total_days);

    years = (total_days / 365);
    weeks = (total_days % 365)/7;
    days = total_days - ((years * 365)+(weeks * 7));

    printf("%d",total_days);
    printf( " days = ");
    printf( "%d",years);
    printf( " year/s,");
    printf( " %d",weeks);
    printf( " week/s and");
    printf( " %d",days);
    printf( " day/s");

    printf("\n\n");


    return 0;



}

