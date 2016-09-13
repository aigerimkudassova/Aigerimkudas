#include <iostream>
#include <cmath>
using namespace std;
int main()
{
cout<<"Enter three resistnces"<<endl;
double a,b,c,D,R;
cin>>a>>b>>c;
D=(1/a)+(1/b)+(1/c);
R=1/D;
cout<<"R= "<<R<<endl;


system("pause>nul");
return 0;
}
