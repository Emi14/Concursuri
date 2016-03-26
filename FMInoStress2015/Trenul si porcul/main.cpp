#include <fstream>
#include <algorithm>
using namespace std;
ifstream f("trenul.in");
ofstream g("trenul.out");
int main()
{
    int n,m;
    f>>n>>m;
    int x=1;
    int v[m+6],r[m+6][6];
    for(int i=1;i<=m;i++)
        {f>>v[i];
        if(v[i]==2)
            r[i][1]=x,r[i][2]=x+1,r[i][3]=-1,x+=2;
        }
    for(int i=1;i<=m;i++)
        if(v[i]==3)
            r[i][1]=x,r[i][2]=x+1,r[i][3]=x+2,r[i][4]=-1,x+=3;
        else
            if(v[i]==1)
                r[i][1]=x,r[i][2]=-1,x++;
    for(int i=1;i<=m;i++){
        int j=1;
        while(r[i][j]!=-1)
            g<<r[i][j]<<" ",++j;
        g<<'\n';
    }

    return 0;
}
