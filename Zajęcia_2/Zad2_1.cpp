/*
*******************************************************************************************
Modyfikacja jednego z poprzednich zadan, dodano mozliwosc dokonywania n powtorzen, gdzie n
jest liczba podana przez uzytkownika
*******************************************************************************************
*/

#include <iostream>



using namespace std;

int main ()
{
   int a,b,c,n;
   cout<<"Ile razy powtorzyc obliczenia: ";
   cin>>n;
   for(int i=0;i<n;i=i+1)//petla liczby powtorzen
   {
      cout<<"Podaj liczbe a = ";
      cin>>a;
      cout<<"Podaj liczbe b = ";
      cin>>b;
      cout<<"Podaj liczbe c = ";
      cin>>c;
      cout<<"Srednia tych liczb wynosi: "<<double(a+b+c)/3<<endl;
      if(a<b)
         if(b<c)
            cout<<"Najwieksza liczba to: "<<c;
         else
            cout<<"Najwieksza liczba to: "<<b;
      else
         if(a<c)
            cout<<"Najwieksza liczba to: "<<c;
         else
            cout<<"Najwieksza liczba to: "<<a;
      cout<<endl<<endl;
   }

return 0;
}
