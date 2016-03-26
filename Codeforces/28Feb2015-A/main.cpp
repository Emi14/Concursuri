#include <iostream>
#include <cstring>
using namespace std;
int i,j;
char s[9];
int main()
{int b=0,w=0;
    for(i=1;i<=8;i++)
    {
        cin.getline(s,9);
        for(j=0;j<=7;j++)
            if(s[j]=='q')
                b+=9;
        else
            if(s[j]=='Q')
             w+=9;
        else
            if(s[j]=='r')
                b+=5;
        else
            if(s[j]=='R')
                w+=5;
        else
            if(s[j]=='b')
                b+=3;
        else
            if(s[j]=='B')
                w+=3;
        else
            if(s[j]=='n')
                b+=3;
        else
            if(s[j]=='N')
                w+=3;
        else
            if(s[j]=='p')
            b+=1;
        else
            if(s[j]=='P')
                w+=1;
        else
            if(s[j]=='k'||s[j]=='K');

    }
    if (b>w)
        cout<<"Black";
    else
        if(b<w)
        cout<<"White";
        else
            cout<<"Draw";
}
