#include <iostream>
#include <cmath>
using namespace std;
int main()
{
cout<<"Enter the coordinates of two points"<<endl;
double a,b,x,y,R;
cin>>a>>b>>x>>y;
R=sqrt((a-x)*(a-x)+(b-y)*(b-y));
cout<<"R= "<<R<<endl;


system("pause>nul");
return 0;
}