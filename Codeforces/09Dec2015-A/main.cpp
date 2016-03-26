#include <iostream>
using namespace std;
int main()
{
    long a,b,c,x,y,z,nr2=0;
    cin>>a>>b>>c>>x>>y>>z;
    double nr=0;
    if(a>x)
       {
    nr+=(a-x)/2;
        cout<<nr;}
        else
            nr2+=(x-a);
    if(b>y)
        nr+=(b-y)/2;
        else
            nr2+=(y-b);
    if(c>z)
        nr+=(c-z)/2;
        else
            nr2+=(z-c);
if(nr>=nr2)
    cout<<"Yes";
else
    cout<<"No";
return 0;
}

