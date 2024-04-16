#include<stdio.h>




struct Student
{
    int rollno;
    char name[25];

};

int main()
{
    struct Student s1={1,"Saud "};
    printf("name of student 1=%d\n",s1.name);
    printf("Age of the student 1=%d\n",s1.rollno);
    
}