/*
*******************************************************************************************
Szukamy maksimum z wprowadzanych przez uzytkownika liczb, obliczamy ich sume i srednia
*******************************************************************************************
*/

#include <iostream>

using namespace std;

int main ()
{
   int n;
   int liczba;
   int s;
   int m;

   cout<<"Ile liczb (minimum 1) n = ";//ustalamy ile liczb chemy badac
   cin>>n;

   //pierwsza liczbe najwygodniej jest wprowadzic poza petla - bedzie ona w tym momencie najwieksza

   cout<<"Podaj liczbe nr 1: ";
   cin>>liczba;

   m=liczba;//za pierwszym razem liczba jest zawsze najwieksza

   /*w zasadzie zmienna m nie jest potrzebna, wystarczy poslugiwac sie zmienna liczba
   zamiast m, jednak uzycie dodatkowej zmiennej m jest czytelniejsze ze wzgledow dydaktycznych
   */

   s=liczba;//suma zlozona z jednego elementu


   for(int i=1;i<n;i=i+1)
   {
       cout<<"Podaj liczbe nr "<<i+1<<": ";
       cin>>liczba;
       if(m<liczba)//sprawdzamy, czy liczba jest wieksza od poprzedniej
          m=liczba;
       s=s+liczba;//dodajemy liczbe do sumy poprzednich liczb
   }
   cout<<"Srednia tych liczb wynosi: "<<double(s)/n<<endl;//pamietajmy o rzutowaniu
   cout<<"Maksymalna z nich to: "<<m;
   return 0;
}
