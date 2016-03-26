#include <fstream>
#include <algorithm>
using namespace std;
ifstream f("buget.in");
ofstream g("buget.out");
int main()
{long long n,b,i,x;
f>>n>>b;
long long v[n+6];
for(i=1;i<=n;i++)
    f>>v[i];
sort(v+1,v+n+1);
for(i=1;i<=n;i++)
{
    x=n-i+1;
    if((b/x)>=v[i])
        b-=v[i];
    else
        break;
}
g<<b/x;
return 0;
}
