#include <stdio.h>
#include <stdlib.h>
//structure about course details
struct Course
{
    int credit_hours[2];
    float score[2];
};
//structure about student details
struct student
{
    struct Course courses;
    char course[2];
    float GPA;
};
//function to calculate student's GPA
float Calc_GPA(float score_math , float score_programming , int credit_math , int credit_programming)
{
 return ((score_math*credit_math) + (score_programming*credit_programming))/(credit_math+credit_programming);
}

int main()
{
    float score[2] , GPA;//declaration of score and variable GPA
    int credit_hours[2];//declaration of credit hours of courses

    struct student S;//make variable from student

    //Enroll student to courses
    S.course[0] = "Mathematics";
    S.course[1] = "Programming";

    //details about math course
    score[0] = S.courses.credit_hours[0] ;
    printf("Enter your score in math (out of 4)\n");
    scanf("%f" , &score[0]);
    credit_hours[0] = S.courses.credit_hours[0] = 3;

    //details about programming course
    score[1] = S.courses.score[1];
    printf("\nEnter your score in programming (out of 4)\n");
    scanf("%f" , &score[1]);
    credit_hours[1] = S.courses.credit_hours[1] = 4;


    //calling function Calc_GPA to calculate GPA and print it
    GPA= Calc_GPA(score[0] , score[1] , credit_hours[0] , credit_hours[1]);
    printf("\nYour GPA is %f \n" , GPA);

    return 0;
}
