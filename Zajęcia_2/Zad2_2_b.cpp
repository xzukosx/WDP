/*
*******************************************************************************************
Drugi podpunkt zadania 2_2
Wypisujemy wszystkie liczby calkowite z [a,b] kolejnosci malejacej
*******************************************************************************************
*/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{

   double a,b;
   cout<<"Podaj a = ";
   cin>>a;
   cout<<"\nPodaj b = ";
   cin>>b;
   if(a<b)
   {
       for(int i=floor(b);i>=a;i=i-1)//odwracamy kolejnosc wypiswwanie
         cout<<i<<" ";
   }
   else
   {
       cout<<"\nBledny przedzial!";
   }
   return 0;
}
