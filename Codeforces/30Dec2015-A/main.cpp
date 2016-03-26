#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    char c[50];
    cin.getline(c,50);
    int x=strlen(c)-1;
    if(c[x]=='k'){
        int y=c[0]-48;
        if(y==5||y==6)
            cout<<"53";
        else
            cout<<"52";
    }
    else
    {
        int i=0,y=0;
        while(c[i]!=' ')
            y=y*10+c[i]-48,i++;
        if(y<=29)
            cout<<"12";
        else
            if(y==30)
                cout<<"11";
            else
                cout<<"7";
    }
    return 0;
}
