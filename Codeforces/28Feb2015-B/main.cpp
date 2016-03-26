#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
vector <long long>a,b,c;
int main()
{long n;
cin>>n;
for(long i=1;i<=n;i++)
{
    long long x;
    cin>>x;
    a.push_back(x);
}
for(long i=1;i<=n-1;++i)
{
    long long x;
    cin>>x;
    b.push_back(x);
}
for(long i=1;i<=n-2;++i)
{
    long long x;
    cin>>x;
    c.push_back(x);
}
sort(a.begin(),a.end());
sort(b.begin(),b.end());
sort(c.begin(),c.end());
for(long i=0;i<n;++i)
        if(a[i]!=b[i])
            {cout<<a[i]<<'\n';
            break;
            }
for(long i=0;i<n-1;++i)
        if(b[i]!=c[i])
        {
            cout<<b[i]<<'\n';
            break;
        }
return 0;
}
