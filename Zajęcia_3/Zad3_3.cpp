#include <iostream>
#include <cmath>//biblioteka z funkcjami pierwiastek i potega

using namespace std;

int main()
{
   double x;
   int d=0;
   int u=0;
   cout<<"Podaj liczby. Wartosc zero konczy wczytywanie.\n\n";
   do
   {
       cout<<"\nPodaj liczbe: ";
       cin>>x;
       if(x>0)
       {
           cout<<"Pierwiastek: "<<sqrt(x);
           d++;
       }

       else if(x<0)
       {
           cout<<"Kwadrat: "<<pow(x,2);
           u++;
       }

   }
   while(x!=0);

   cout<<"KONIEC WCZYTYWANIA"<<endl;

   cout<<"Liczba wczytanych wartosci: "<<d+u+1<<endl;
   cout<<"w tym dodatnich: "<<d<<endl;
   cout<<"w tym ujemnych: "<<u<<endl;
   return 0 ;
}
