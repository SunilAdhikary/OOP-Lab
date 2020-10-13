//Write a program in CPP to illustrate the concept of constructor(default, parameterized and copy constructor) and destructor taking class complex as an example.


#include<iostream>
using namespace std;
class complex
{
float real,imag;
public:
//default constructor
complex()
{
real=0;
imag=0;
}
//parameterized constructor
complex(float r,float i)
{
real=r;
imag=i;
}
//copy constructor
complex(complex &c)
{
real=c.real;
imag=c.imag;
}
//destructor
~complex()
{
cout<<"Destroying object"<<endl;
}
void showdata()
{
cout<<real<<"+i"<<imag<<endl;
}
};
int main()
{
complex c1,c2(2.2,3.3),c3(c2);
c1.showdata();
c2.showdata();
c3.showdata();
return 0;
}
