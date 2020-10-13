//WAP in C to input the name, roll, marks and address of n students entered by the user and display the entered details using the concept of structure.


#include<stdio.h>
struct student
{
    char name[20];
    int roll;
    float marks;
    char address[50];
};
int main()
{
    struct student s[30];
    int i,n;
    printf("Enter num of student");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("Enter the student %d\n Name\n Roll\n Marks\n Address\n",i);
    scanf("%s%d%f%s",&s[i].name,&s[i].roll,&s[i].marks,&s[i].address);
    }
    for(i=0;i<n;i++)
    {
        printf("Show the details of students%d\n",i);
    printf("Name:%s\n Roll:%d\n Marks:%f\n Address:%s\n",s[i].name,s[i].roll,s[i].marks,s[i].address);
    }
    return 0;
}
