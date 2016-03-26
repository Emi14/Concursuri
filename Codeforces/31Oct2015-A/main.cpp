#include <iostream>
#include <queue>
using namespace std;
int main()
{queue <pair<int,int> > q;
char c[9][9];
int a[10][10];
for(int i=1;i<=8;i++)
    {cin>>c[i];
    for(int j=0;j<8;j++)
        if(c[i][j]=='B')
            a[i][j+1]=1,q.push(make_pair(i,j+1));
        else
            if(c[i][j]=='W')
                a[i][j+1]=2,q.push(make_pair(i,j+1));
        else
            a[i][j+1]=0;
    }
int nra=-1,nrn=-1;
for(int i=1;i<=8&&nra==-1;i++)
    for(int j=1;j<=8&&nra==-1;j++)
        if(a[i][j]==2&&nra==-1)
        {
            bool flag=true;
            for(int k=i-1;k>=1;k--)
                if(a[k][j]!=0)
                    flag=false;
            if (flag)
                nra=i-1;
        }

for(int i=8;i>=1&&nrn==-1;i--)
    for(int j=1;j<=8&&nrn==-1;j++)
        if(a[i][j]==1&&nrn==-1)
             {bool flag=true;
                for(int k=i+1;k<=8;k++)
                if(a[k][j]!=0)
                    flag=false;
                if (flag)
                    nrn=8-i;
             }
int ok=0;
    if(nra==-1)
        cout<<'B',ok=1;
    if(nrn==-1&&ok==1)
        cout<<'A',ok=1;
    if(ok==0)
    if(nra<=nrn)
        cout<<'A';
    else
        cout<<'B';
return 0;
}
