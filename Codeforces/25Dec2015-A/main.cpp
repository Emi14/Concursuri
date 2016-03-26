#include <iostream>

using namespace std;

int main()
{
    char c[10006];
    long long n,p,q,s[106],z,x,y;
    cin>>n>>p>>q;
    cin>>c;
    int k=0;
    s[0]=0;
    while(n>=k+p)
        k+=p,s[k]=k/p;
    for(int i=0;i<=n;i++)
        if(n>=i+q&&s[i+q]==0&&(s[i]!=0||i==0))
            s[i+q]=s[i]+1;
    if(s[n]!=0)
    {
        z=n;
        y=0;
        cout<<s[n]<<'\n';
        while(n%p!=0)
            y++,n-=q;
        x=n/p;
        for(int i=0;i<=p*x-1;i++)
            {cout<<c[i];
            if((i+1)%p==0)
                cout<<'\n';
            }
        y=0;
        for(int i=p*x;i<=z-1;i++)
            {cout<<c[i];
            y++;
            if(y%q==0)  x=0,cout<<'\n';
        }
    }
    else
        cout<<"-1";
    return 0;
}
