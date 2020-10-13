//Write a program in CPP to input the name, roll, marks and address of a student from the user and display the entered details using the concept of class and object.


#include<iostream>
using namespace std;
class student
{
    char name[30];
    int roll;
    float marks;
    char address[50];
public:
    void getdata()
    {
        cout<<"Enter the student details:"<<endl;
        cout<<"Name:";
        cin>>name;
        cout<<"Roll:";
        cin>>roll;
        cout<<"Marks:";
        cin>>marks;
        cout<<"Address:";
        cin>>address;
    }
    void showdata()
    {
        cout<<"The student detail is:"<<endl<<"Name:"<<name<<endl<<"Roll:"<<roll<<endl<<"Marks:"<<marks<<endl<<"Address:"<<address<<endl;
    }
};
int main()
{
    student s;
    s.getdata();
    s.showdata();
    return 0;
}
