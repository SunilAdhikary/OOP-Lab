//WAP in C to add two complex numbers using the concept of structure.


#include<stdio.h>
struct sumcomplex
{
    float real, imag;
};
int main()
{
    struct sumcomplex a,b,c;
    printf("Enter the 1st complex num. where 1st num is real and 2nd is num imaginary \n");
    scanf("%f%f",&a.real,&a.imag);
    printf("Enter the 2nd complex num. where 1st num is real and 2nd is num imaginary \n");
    scanf("%f%f",&b.real,&b.imag);
    c.real=a.real+b.real;
    c.imag=a.imag+b.imag;
    printf("Sum of two complex numbers :(%f)+(%fi)",c.real,c.imag);
    return 0;
}
