/*
*******************************************************************************************
Pierwszy podpunkt zadania 2_2
Wypisujemy wszystkie liczby calkowite z [a,b], trzeba zwrocic uwage na poprawnosc
dzialania nawet dla koncow niecalkowitych
*******************************************************************************************
*/
#include <iostream>
#include <cmath>//biblioteka zawierajaca funkcje matematyczne - podloga i sufit


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
       for(int i=ceil(a);i<=b;i=i+1)//funkcja ceil zapewnia poprawnosc nawet dla liczb niecalkowitych
         cout<<i<<" ";
   }
   else
   {
       cout<<"\nBledny przedzial!";
   }
   return 0;
}
