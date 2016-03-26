#include <iostream>
using namespace std;

int main()
{
    long long a,b,x=1,y,z;
    cin>>a>>b;
    long long nr=0;
    while(x<=a)
        x*=2;
    y=x-1;
    z=1;
    while(y>=a+z&&z*2<x)
    {
        if(y>=a+z&&y<=b+z)
            nr++;
        z*=2;

    }
    x*=2;
    while(b>=x/2)
    {
        y=x-1;
        z=1;
        while(y-z>=a&&z*2<x)
    {
        if(y>=a+z&&y<=b+z)
            nr++;
        z*=2;

    }
     x*=2;
    }
    cout<<nr;
    return 0;
}
