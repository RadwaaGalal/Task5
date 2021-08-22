#include <stdio.h>
#include <stdlib.h>
//structure about course details
struct Course
{
    int credit_hours_Math;
    int credit_hours_Programming;
    float score_Math;
    float score_programming;
};
//structure about student details
struct student
{
    struct Course courses;
    char course[2];
    float GPA;
};
//function to calculate student's GPA
void Calc_GPA(float score_math , float score_programming , int credit_math , int credit_programming)
{
 float GPA;
 GPA = ((score_math*credit_math) + (score_programming*credit_programming))/(credit_math+credit_programming);
 printf("\nYour GPA is %.2f\n" , GPA);
}

int main()
{
    float score_Math , score_programming;//declaration of score
    int credit_math ,credit_programming;//declaration of credit hours of courses

    struct student S;//make variable from student

    //enroll student to courses
    S.course[0] = "Mathematics";
    S.course[1] = "Programming";

    //details about math course
    score_Math = S.courses.score_Math;
    printf("Enter your score in math (out of 4)\n");
    scanf("%f" , &score_Math);
    credit_math = S.courses.credit_hours_Math = 3;

    //details about programming course
    score_programming = S.courses.score_programming;
    printf("\nEnter your score in programming (out of 4)\n");
    scanf("%f" , &score_programming);
    credit_programming = S.courses.credit_hours_Programming = 4;


    //calling function Calc_GPA to calculate GPA and print it
    Calc_GPA(score_Math , score_programming , credit_math , credit_programming);

    return 0;
}
