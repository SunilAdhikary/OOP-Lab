//WAP in CPP to illustrate the concept of default arguments.

#include <iostream>
using namespace std;
float si(int p, int t, int r=5)
{
	return (p*t*r)/100;
}
int main()
{
	int p, t, r;
	cout<<"Enter principal amount: "<<endl;
	cin>>p;
	cout<<"Enter duration (in years): "<<endl;
	cin>>t;
	cout<<"Enter rate of interest: "<<endl;
	cin>>r;
	cout<<"Simple interest = "<<si(p, t, r)<<endl;
	cout<<"Simple interest = "<<si(p, t);
	return 0;
}
