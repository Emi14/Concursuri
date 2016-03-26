#include <iostream>

using namespace std;

int main()
{
    int n,m,k;
    cin>>n>>m;
    long long c[n+6][m+6],v[m+6];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>c[i][j];

    for(int i=1;i<=n;i++)
        {long long mini=1000000009;
            for(int j=1;j<=m;j++)
                if(c[i][j]<mini)
                    mini=c[i][j];
            v[i]=mini;
        }
    long long maxi=-1;
    for(int i=1;i<=n;i++)
        if(v[i]>maxi)
            maxi=v[i];
    cout<<maxi;
    return 0;
}
