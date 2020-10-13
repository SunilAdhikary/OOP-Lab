//WAP in CPP to illustrate the concept of inline function.

#include<iostream>
using namespace std;

class operation
{
    public:
    inline float mul(float x, float y)
    {
        return (x*y);
    }
    inline float cube(float x )
    {
        return (x*x*x);
    }
};
int main()
{
    operation s;
    float val1,val2;
    cout<<"Enter two values:"<<endl;
    cin>>val1>>val2;
    cout<<"\nMultiplication value is:"<<s.mul(val1,val2)<<endl;
    cout<<"\n\nCube value is:"<<s.cube(val1)<<"\t" "&" "\t"<<s.cube(val2)<<endl;
    return 0;
}
