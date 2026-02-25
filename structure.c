#include<stdio.h>
#include<string.h>

struct student
{
    int roll;
    char name[50];
    float cgpa;
};

int main(){
    struct student s1;
    s1.roll = 87;
    strcpy(s1.name,"Paramjeet");
    s1.cgpa = 9.8;

    struct student s2;
    s2.roll = 99;
    strcpy(s2.name,"Raj Vishavkarama");
    s2.cgpa = 7;

    printf("%d\n",s1.roll);
    printf("%s\n",s1.name);
    printf("%f",s1.cgpa);

    return 0;
}
