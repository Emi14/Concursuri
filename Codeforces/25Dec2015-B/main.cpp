#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    long long n,x;
    cin>>n;
    long long v[n+6];
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        v[x]=i;
    }
    long long s=0;
    for(int i=2;i<=n;i++)
        s+=abs(v[i]-v[i-1]);
    cout<<s;
    return 0;
}
