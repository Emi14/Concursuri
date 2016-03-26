#include <iostream>

using namespace std;
int v[106];
int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=1;i<=n;i++)
    {
        int x,k;
        cin>>k;
        for(int j=1;j<=k;j++)
            cin>>x,v[x]++;
    }
    bool flag=true;
    for(int i=1;i<=m;i++)
        if(v[i]==0)
            {flag=false;
            break;}
    if(flag)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
