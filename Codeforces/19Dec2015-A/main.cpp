#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int v[n+6];
    for(int i=1;i<=n;i++)
        cin>>v[i];
    sort(v+1,v+n+1);
    long long s=0;
    int nr=0,i=n;
    while(s<m&&i>=1)
        s+=v[i],i--,nr++;
    cout<<nr;


    return 0;
}
