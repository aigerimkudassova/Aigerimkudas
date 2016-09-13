#include <iostream>
#include <cmath>
using namespace std;
int main()
{
cout<<"Enter the sides of triangle"<<endl;
double a,b,c,m,n,l;
cin>>a>>b>>c;
l=0.5*sqrt(2*(b*b+c*c)-a*a);
m=0.5*sqrt(2*(a*a+c*c)-b*b);
n=0.5*sqrt(2*(a*a+b*b)-c*c);


cout<<"l= "<<l<<endl;
cout<<"m= "<<m<<endl;
cout<<"n= "<<n<<endl;

system("pause>nul");
return 0;
}