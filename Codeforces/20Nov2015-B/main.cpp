#include <iostream>
using namespace std;
int v[100006],p[100006];
int main()
{long n,m;
cin>>n>>m;
for(int i=1;i<=n;i++)
{
    long x;
    cin>>x;
    v[x]++;
    p[x]=i;
}
long b[100006];
bool flag=true,amb=false;
for(int i=1;i<=m&&flag;i++)
{
    cin>>b[i];
    if(v[b[i]]==1)
        b[i]=p[b[i]];
    else
        if(v[b[i]]>1)
            amb=true;
        else
            if(v[b[i]]==0)
                flag=false;
}
if(amb==true&&flag==true)
    cout<<"Ambiguity";
else
    if(flag==true)
{
    cout<<"Possible\n";
    for(int i=1;i<=m;i++)
        cout<<b[i]<<" ";
}
else
    cout<<"Impossible";
return 0;
}
