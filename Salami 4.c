
#include<stdio.h>
#define PI 3.1416

int main()

{
    float radius,circumference,area,diameter;

    printf("Enter radius:");
    scanf("%f",&radius);


    diameter = 2*radius;
    circumference = 2*PI*radius;
    area = PI*radius*radius;

    printf("Diameter :%.0f\n",diameter);
    printf("Circumference : %.2f units\n ",circumference);
    printf("Area: %.2f sqr. units\n",area);
    printf("\n\n");

    return 0;

}

