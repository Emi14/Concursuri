#include <fstream>
using namespace std;
ifstream f("random.in");
ofstream g("random.out");
int main()
{int n;
f>>n;
if(n==1982)
    g<<"Robert Tarjan";
else
    if(n==1998)
        g<<"Peter Shor";
    else
        if(n==1986)
            g<<"Leslie Valiant";
        else
        if(n==1990)
            g<<"Alexander Razborov";
        else
            if(n==1994)
                g<<"Avi Wigderson";
        else
            if(n==2002)
                g<<"Madhu Sudan";
            else
                if(n==2006)
                    g<<"Jon Kleinberg";
                else
                    if(n==2010)
                        g<<"Daniel Spielman";
                    else
                        g<<"Subhash Khot";
return 0;
}
