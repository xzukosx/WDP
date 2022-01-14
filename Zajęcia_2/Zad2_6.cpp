/*
*******************************************************************************************
Tabliczka mnozenia dla liczb z zakresu {1,...,n} x {1,...,9}, n<10 podaje uzytkownik
*******************************************************************************************
*/
#include <iostream>
#include<iomanip>
/*biblioteka pozwala uzyc flagi width()
okreslajacej na ilu polach wypisac liczbe, przydatne przy tworzeniu tabel, kolumn itp.
Ustawienie szerokosci dotyczy tylko najblizszej operacji in/out. Domyslnie zero.
*/

using namespace std;

int main ()
{
   int n;

   cout<<"Podaj n>0 i n<10; n = ";
   cin>>n;
   cout<<"  ";
   for(int i=1;i<=9;i++)//petla drukuje naglowek w pierwszym wierszu (numery kolumn)
   {
       cout.width(2);
       cout<<i<<" ";
   }
   cout<<endl;

   for(int i=1;i<=n;i++)
   {
      cout<<i<<" ";//drukujemy numer wiersza
      for(int j=1;j<=9;j++)//drukujemy wartosci w wierszach
      {
          cout.width(2);//beda liczby co najwyzej dwucyfrowe, wiec wystarcza dwa pola
          cout<<i*j<<" ";
      }

      cout<<endl;
   }


   return 0;
}
