#include <iostream>

using namespace std;

int main ()
{
   int a,b;
   cout<<"Podaj a: ";
   cin>>a;
   cout<<"Podaj b: ";
   cin>>b;
   if(a==0)
      if(b==0)
         cout<<"Rownanie tozsamosciowe";
      else
         cout<<"Rownanie sprzeczne";
   else
      cout<<"Rozwiazaniem rownania a*x + b =0 jest x = "<<double(-b)/a;
   return 0 ;
}
