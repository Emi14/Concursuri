#include <fstream>
using namespace std;
ifstream f("input.txt");
ofstream g("output.txt");
long long n,y;
int i,j,maxi,x,z,zero,mini,k,ok,imin,imax,t;
int main()
{f>>t;
for(i=1;i<=t;i++)
{int v[11]={0};
    g<<"Case #"<<i<<": ";
    f>>n;
    j=1;y=n;
    if(n>10)
    {while (y)
        {
          v[j]=y%10;
          y/=10;
          j++;
        }
    j--;
    k=j;ok=0;
    while (k>=1)
    {
        mini=10;
        imin=0;
        for(z=k-1;z>=1;z--)
            if(v[z]<=mini&&v[z]!=ok)
                mini=v[z],imin=z;
        if(mini<v[k])
            break;
            else
                k--,ok--;

    }
    for(z=j;z>=1;z--)
        if(z==k)
            g<<mini;
    else
        if(z==imin)
            g<<v[k];
    else
        g<<v[z];
    g<<" ";
     k=j;
    while (k>=1)
    {
        maxi=0;
        imax=0;
        for(z=k-1;z>=1;z--)
            if(v[z]>=maxi)
                maxi=v[z],imax=z;
        if(maxi>v[k])
            break;
            else
                k--;

    }
    for(z=j;z>=1;z--)
        if(z==k)
            g<<maxi;
    else
        if(z==imax)
            g<<v[k];
    else
        g<<v[z];

    g<<'\n';
    }
    else
        g<<n<<" "<<n<<'\n';
}
return 0;
}
