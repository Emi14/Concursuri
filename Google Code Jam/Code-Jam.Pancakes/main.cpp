#include <fstream>
#include<tgmath.h>
using namespace std;
ifstream f("input.txt");
ofstream g("output.txt");
int caut(int d,int p[],int &k)
{
    int maxi=-1;
    for (int s=1;s<=d;s++)
        if(p[s]>maxi)
            maxi=p[s],k=s;
    return maxi;
}
bool egal (int d,int p[])
{
    for(int s=1;s<d;s++)
        if(p[s]!=p[s+1])
            return false;
    if(d>1)
    return true;
    else
        return false;
}
int main()
{int t;
f>>t;
for(int i=1;i<=t;i++)
{
    int s=0,d,k,maxi=-1,p[5001];
    f>>d;
    for(int j=1;j<=d;j++)
        {f>>p[j];
        s+=p[j];
        if(p[j]>maxi)
            maxi=p[j],k=j;
        }
    if(maxi<=3)
        g<<"Case #"<<i<<": "<<maxi<<'\n';
    else
        {
            int z=maxi,time=0;
            while(time<z)
            {
                p[++d]=maxi/2;
                p[k]-=p[d];
                maxi=caut(d,p,k);
                time++;
                if(z>time+maxi)
                    z=time+maxi;
            }
            g<<"Case #"<<i<<": "<<z<<'\n';
        }
}
return 0;
}
