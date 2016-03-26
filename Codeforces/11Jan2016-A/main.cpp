#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
char a[10000016],b[10000016];
int main()
{
    scanf("%s\n%s",a,b);
    int i=0;
    while(a[i]=='0')
        i++;
    strcpy(a,a+i);
    i=0;
    while(b[i]=='0')
        i++;
    strcpy(b,b+i);
    int k=strlen(a),z=strlen(b);
    if(k>z)
        cout<<">";
    else
        if(k<z)
            cout<<"<";
        else
        {
            bool flag=true;
            int x=0;
            while(x<k)
                {if(a[x]>b[x])
                {cout<<">";flag=false;break;
                }
                else
                    if(a[x]<b[x])
                {
                    cout<<"<";flag=false;break;
                }
                ++x;
                }
            if(flag==true)
                cout<<"=";
        }
    return 0;
}
