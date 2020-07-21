#include<stdio.h>

int main()

{
    int marks_of_subject1,marks_of_subject2,marks_of_subject3,marks_of_subject4,marks_of_subject5,total_marks,average;
    float percentage;


    printf("Enter marks of five subjects: ");
    scanf("%d%d%d%d%d",&marks_of_subject1,&marks_of_subject2,&marks_of_subject3,&marks_of_subject4,&marks_of_subject5);




    total_marks = (marks_of_subject1 + marks_of_subject2 + marks_of_subject3 + marks_of_subject4 + marks_of_subject5);
    printf("Total = %d\n",total_marks);

    average = total_marks/5;
    printf("Average = %d\n",average);

    percentage = (float) (total_marks * 100)/500;
    printf("Percentage = %.2f",percentage);

    return 0;
}


