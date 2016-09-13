#include <iostream>
#include <cmath>
using namespace std;
int main()
{
cout<<"Enter the sides of triangle"<<endl;
double a,b,c,l,m,n;
cin>>a>>b>>c;
l=(sqrt(b*c*((b+c)*(b+c)-a*a)))/(b+c);
n=(sqrt(a*b*((a+b)*(a+b)-c*c)))/(a+b);
m=(sqrt(a*c*((a+c)*(a*c)-b*b)))/(a+c);
cout<<"l= "<<l<<endl;
cout<<"m= "<<m<<endl;
cout<<"n= "<<n<<endl;

system("pause>nul");
return 0;
}
