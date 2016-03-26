#include <iostream>
using namespace std;
int viz[100006];
int main()
{
    long n;
    cin>>n;
    int v[n+6];
    for(int i=1;i<=n;i++)
        {cin>>v[i];
        viz[v[i]]=i;}
    v[1]=1;
    long maxi=0;
    for(int i=2;i<=n;i++)
        if(viz[i]>viz[i-1])
            {v[i]=v[i-1]+1;
            if(maxi<v[i])
                maxi=v[i];
            }
            else
                v[i]=1;
    if(v[n]>maxi)
        maxi=v[n];
    cout<<n-maxi;
    return 0;
}

