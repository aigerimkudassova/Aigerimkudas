#include <iostream>
#include <cmath>
using namespace std;
int main()
{
cout<<"Enter the sides of triangle"<<endl;
double a,b,c,S,p,l,m,n;
cin>>a>>b>>c;
p=(a+b+c)/2;
S=sqrt(p*(p-a)*(p-b)*(p-c));
l=2*S/a;
m=2*S/b;
n=2*S/c;
cout<<"l= "<<l<<endl;
cout<<"m= "<<m<<endl;
cout<<"n= "<<n<<endl;

system("pause>nul");
return 0;
}
