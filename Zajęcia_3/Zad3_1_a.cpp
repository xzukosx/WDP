#include <iostream>

using namespace std ;

int main ()
{
   int a,b;

   cout<<"Podaj liczbe a = ";
   cin>>a;
   cout<<"Podaj liczbe b = ";
   cin>>b;
   while(a!=b)
   {
       if(a<b)
          b=b-a;
       else
          a=a-b;
   }

   cout<<"NWD(a,b) = "<<a;
   return 0 ;
}
