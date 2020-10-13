//Write a program in CPP to find the sum of two complex numbers using the OOP concept.

#include<iostream>
using namespace std;
class complex
{
    float real, imag;
public:
    void getdata()
{
    cout<<"Enter the real part and imaginary part:";
    cin>>real>>imag;
}
void showdata()
{
    cout<<"The sum is:"<<endl;
    cout<<real<<"+i"<<imag;
}
complex sum(complex cn1,complex cn2)
{
    complex temp;
    temp.real=cn1.real+cn2.real;
    temp.imag=cn1.imag+cn2.imag;
    return temp;
}
};
int main()
{
    complex c1,c2,c3;
    cout<<"Enter the first complex num:"<<endl;
    c1.getdata();
    cout<<"Enter the second complex num:"<<endl;
    c2.getdata();
    c3=c3.sum(c1,c2);
    c3.showdata();
    return 0;
}
