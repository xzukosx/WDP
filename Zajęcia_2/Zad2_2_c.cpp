/*
*******************************************************************************************
Trzeci podpunkt zadania 2_2
Wypisujemy wszystkie liczby calkowite z [a,b] podzielne przez dwa w kolejnosci rosnacej
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
       for(int i=ceil(a);i<=b;i=i+1)
        if(!(i%2))//sprawdzamy parzystosc rszta z dzielenia jest interpretowana jako boolean
         cout<<i<<" ";
   }
   else
   {
       cout<<"\nBledny przedzial!";
   }
   return 0;
}
