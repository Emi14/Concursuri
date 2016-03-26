#include <fstream>
using namespace std;
ifstream f("zeul.in");
ofstream g("zeul.out");
struct sf{
int x,y;};
int d[100006],p[100006];
int main()
{int n,m;
f>>n>>m;
//int d[n+6]={0},p[n+6]={0};
for(int i=1;i<=m;i++){
    int x,y;
    f>>x>>y;
    d[x]++;
    p[y]++;
}
int nr=0;
sf k[m+6];
for(int i=1;i<n;i++)
    if(d[i]==p[i]) continue;
    else
    {
     if(d[i]<p[i])
        for(int j=i+1;j<=n&&d[i]<p[i];j++){
            if(p[j]<d[j]){
                k[++nr].x=i;
                k[nr].y=j;
                d[i]++;
                p[j]++;
                j--;
                }
        }
    else
        for(int j=i+1;j<=n&&d[i]>p[i];j++){
            if(p[j]>d[j]){
                k[++nr].x=j;
                k[nr].y=i;
                d[j]++;
                p[i]++;
                j--;
                }
        }

    }
    g<<nr<<'\n';
    for(int i=1;i<=nr;i++)
        g<<k[i].x<<" "<<k[i].y<<'\n';
return 0;
}

