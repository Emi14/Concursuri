#include <iostream>
using namespace std;
int main()
{long d1,d2,d3;
cin>>d1>>d2>>d3;
long long s1=d1+d2+d3,s2=d1*2+2*d2,s3=2*d1+2*d3,s4=2*d3+2*d2;
long long mini=9999999999;
if(s1<mini)
   mini=s1;
if(s2<mini)
    mini=s2;
if(s3<mini)
    mini=s3;
if(s4<mini)
    mini=s4;
cout<<mini;
}
