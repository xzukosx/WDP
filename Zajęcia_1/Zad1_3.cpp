#include <iostream>

using namespace std ;

int main ()
{
   int s,t;
   cout<<"Podaj dlugosc trasy (w km, liczba calkowita) = ";
   cin>>s;
   cout<<endl<<"Podaj czas pokonania trasy (w min, liczba calkowita) = ";
   cin>>t;
   cout<<endl<<"Twoja srednia predkosc wynosi: "<<double(s)/t*60<<" km/h"<<endl;
   return 0 ;
}
