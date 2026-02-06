#include<stdio.h>
struct student
{
	int roll;
	float marks;
	char grade;
};
int main()
{
	struct student s1,s2;
	s1.roll=101;
	s1.marks=98.4;
	s1.grade='o';
	s2=s1;
    printf("\nstudent roll number = %d\nstudent marks = %f\n student grade = %c",s2.roll,s2.marks,s2.grade);
    return 0;
}
