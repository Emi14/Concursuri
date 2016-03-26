#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    long n,x;
    cin>>n;
    vector<long>v;
    long long s=0;
    for(int i=1;i<=n;i++)
        {cin>>x;
        v.push_back(x);
        s+=x;
        }
    double d=(double long)s/n;
    long long s1=0,s2=0;
    if(d==floor(d))
        {int a=floor(d);
        for(int i=0;i<v.size();i++)
            if(v[i]<a)
                s1+=(a-v[i]);
                else
                    s2+=(v[i]-a);
        if(s1>s2) cout<<s1;
        else cout<<s2;
        }
        else
        {
            int a=floor(d),b=a+1;
            for(int i=0;i<v.size();i++)
                {if(v[i]<a)
                    s1+=(a-v[i]);
                if(v[i]>b)
                    s2+=(v[i]-b);
                }
            if(s1>s2) cout<<s1;
        else cout<<s2;
        }

    return 0;
}
