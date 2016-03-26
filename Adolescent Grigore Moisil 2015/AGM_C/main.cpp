#include <fstream>

using namespace std;
ifstream f("clasic.in");
ofstream g("clasic.out");
int main()
{
   int T;
   f>>T;
   for(int t=1;t<=T;t++)
   {
       int n,s,x;
       f>>n;
       f>>s;
       for(int i=2;i<=n;i++)
            f>>x,s^=x;
       g<<s<<'\n';

   }
return 0;
}
