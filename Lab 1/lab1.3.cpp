//WAP in CPP to find the area of circle and rectangle using the concept of function overloading.

#include<iostream>
using namespace std;
float area(float r)
{
    return (3.14*r*r);
}
float area(float l, float b)
{
    return (l*b);
}
int main()
{
    cout<<"Area of circle is: "<<area(2)<<endl;
    cout<<"Area of retangle is: "<<area(3,5)<<endl;
    return 0;
}
