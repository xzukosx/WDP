#include <iostream>
#include <cmath>// biblioteka zawierajaca stala pi i funkcje pierwiastek

using namespace std;

int main ()
{
   double r,H;
   cout<<"Podaj wspolrzedne dlugosc promienia podstawy r = ";
   cin>>r;
   cout<<"Podaj dlugosc wysokosci H = ";
   cin>>H;
   cout<<"\nObjetosc stozka wynosi: "<<M_PI*r*r*H/3;
   cout<<"\nPole powierzchni calkowitej stozka wynosi: "<<M_PI*r*r+M_PI*r*sqrt(r*r+H*H);
   return 0 ;
}
