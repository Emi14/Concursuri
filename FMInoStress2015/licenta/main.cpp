#include <fstream>
#include <algorithm>
using namespace std;
ifstream f("licenta.in");
ofstream g("licenta.out");
struct inter{
    long long s,f;
    };
bool cmp(inter a,inter b)
{
    if(a.s<b.s) return true;
    else
        if(a.s==b.s) return a.f<b.f;
    else
        return false;
}
int main()
{int n,m,k,mini,a,b;
f>>k>>n;
inter v[n+6];
mini=0;
for(int i=1;i<=n;++i)
    {f>>a>>b;
    if(k<=b-a) v[++mini].s=a,v[mini].f=b;
    }
n=mini;
sort(v+1,v+n+1,cmp);
f>>m;
inter d[m+6];
mini=0;
for(int i=1;i<=m;++i)
    {f>>a>>b;
    if(k<=b-a) d[++mini].s=a,d[mini].f=b;
    }
m=mini;
sort(d+1,d+m+1,cmp);
mini=1000000006;
for(int i=1;i<=n;++i)
{
    for(int j=1;j<=m;++j)
    {
        if(d[j].s+k>v[i].f)
            break;
        long long x=max(v[i].s,d[j].s),y=min(v[i].f,d[j].f);
        if(x<mini&&k<=y-x)
            mini=x;
    }
}
if(mini==1000000006)
    g<<"-1";
else
    g<<mini<<" "<<mini+k;
return 0;
}
