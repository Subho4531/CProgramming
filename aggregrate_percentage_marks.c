/*
If the marks obtained by a student in five different subjects are input through the
keyboard, find out the aggregate marks and percentage marks obtained by the student.
Assume that the maximum marks that can be obtained by a student in each subject is
100.
*/

#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5;
    float aggregregate, precentage;
    printf("Enter the marks of 1st Subject out of 100 = ");
    scanf("%d", &m1);
    printf("Enter the marks of 2nd Subject out of 100 = ");
    scanf("%d", &m2);
    printf("Enter the marks of 3rd Subject out of 100 = ");
    scanf("%d", &m3);
    printf("Enter the marks of 4th Subject out of 100 = ");
    scanf("%d", &m4);
    printf("Enter the marks of 5th Subject out of 100 = ");
    scanf("%d", &m5);
    aggregregate = m1+m2+m3+m4+m5;

    precentage = (aggregregate/500)*100;

    printf("Aggregrate Marks = %.2f\nPercentage Marks = %.2f", aggregregate,precentage);

    return 0;
}