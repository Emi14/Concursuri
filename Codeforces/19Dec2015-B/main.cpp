#include <iostream>

using namespace std;
int v[11];
int main()
{
    int n,m,x;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>x,v[x]++;
    long long s=0;
    for(int i=1;i<m;i++)
        {if(v[i]==0) continue;
        for(int j=i+1;j<=m;j++)
            if(v[j]!=0)
                s+=(v[i]*v[j]);
        }
    cout<<s;
    return 0;
}
