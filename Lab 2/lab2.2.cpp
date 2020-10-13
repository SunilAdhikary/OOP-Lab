//Write a program in CPP to input the name, roll, marks and address of n students from the user and display the entered details using the concept of class and objects.


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
        cout<<"Name:"<<name<<endl<<"Roll:"<<roll<<endl<<"Marks:"<<marks<<endl<<"Address:"<<address<<endl;
    }
};
int main()
{
    int n;
    cout<<"Enter the num of students: ";
    cin>>n;
    student s[n];
    for(int i=0; i<n; i++)
    {
        cout<< "Enter the details of students "<<i+1<<endl;
        s[i].getdata();
    }
    cout<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<"Details of students "<<i+1<<endl;
        s[i].showdata();
    }
    return 0;
}
