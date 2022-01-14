#include <iostream>

using namespace std ;

int main ()
{
   int l;
   cout<<"Podaj liczbe calkowita: ";
   cin>>l;
   if(l%2==0)
      cout<<endl<<"Liczba "<<l<<" jest parzysta.";
   else
      cout<<endl<<"Liczba "<<l<<" jest nieparzysta.";
   return 0 ;
}
