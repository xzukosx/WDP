#include <iostream>
#include <cmath>
using namespace std ;

int main ()
{
   int a,b;

   cout<<"Podaj liczbe a = ";
   cin>>a;
   cout<<"Podaj liczbe b = ";
   cin>>b;
   for (;a!=b;a<b?b=b-a:a=a-b);
   cout<<"NWD(a,b) = "<<a;
   return 0 ;
}
