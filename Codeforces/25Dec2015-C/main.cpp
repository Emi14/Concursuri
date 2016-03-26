#include <iostream>
#include<cstring>
#include<stack>
using namespace std;

int main()
{
    char c[1000006];
    cin>>c;
    stack <int> s;
    long nr=0,i;
    long long k=strlen(c);
    for(i=0;i<k;++i)
        {if(c[i]=='(')
            s.push(1);
        else
            if(c[i]=='[')
                s.push(3);
            else
                if(c[i]=='{')
                    s.push(5);
                else
                    if(c[i]=='<')
                        s.push(7);
                    else
                        if(c[i]==')')
                        {
                            if(s.empty())
                            {
                                cout<<"Impossible";
                                break;
                            }
                            else
                                {int x=s.top();
                                s.pop();
                                if(x!=1)
                                    ++nr;
                                }

                        }
                        else
                        if(c[i]==']')
                        {
                            if(s.empty())
                            {
                                cout<<"Impossible";
                                break;
                            }
                            else
                                {int x=s.top();
                                s.pop();
                                if(x!=3)
                                    ++nr;
                                }

                        }
                        else
                            if(c[i]=='}')
                        {
                            if(s.empty())
                            {
                                cout<<"Impossible";
                                break;
                            }
                            else
                                {int x=s.top();
                                s.pop();
                                if(x!=5)
                                    ++nr;
                                }

                        }
                        else
                            if(c[i]=='>')
                        {
                            if(s.empty())
                            {
                                cout<<"Impossible";
                                break;
                            }
                            else
                                {int x=s.top();
                                s.pop();
                                if(x!=7)
                                    ++nr;
                                }

                        }


        }
        if(s.empty())
            {if(i==k)
                cout<<nr;
            }
            else
                cout<<"Impossible";
    return 0;
}
