#include<fstream>
using namespace std;
ifstream f("harddp.in");
ofstream g("harddp.out");
char c[1000];
int main()
{
    int T;
    f>>T;
    for(int t=1;t<=T;t++)
    {
        int n;
        f>>n;
        int nr1=0,nr2=0;
        f.get();
        f.getline(c,n+2);
        for(int i=0;i<n;i++)
            if(c[i]=='1')
                nr1++;
            else
                nr2++;
    if(nr2<nr1)
        for(int i=1;i<=n;i++)
            g<<0;
    else
        for(int i=1;i<=n;i++)
            g<<1;
    g<<'\n';
    }
return 0;

}
