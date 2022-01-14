#include <iostream>
#include <cmath>//biblioteka zaladowana ze wzgledu na uzycie stalej M_Pi

using namespace std;

int main()
{
   double x,y;//pole kola i kwadratu
   int i=0;//licznik ile razy kwadrat miesci sie w kole
   char znak;
   do
   {
       cout<<"Podaj pole kwadratu: ";
       cin>>y;
       cout<<"Podaj pole kola: ";
       cin>>x;
       if(M_PI*y<=2*x)//warunek: przekatna kwadratu nie wieksza niz srednica kola (wyprowadzic!)
       {
           cout<<"\nTen kwadrat MIESCI sie w tym kole\n";
           i++;
       }
       else
           cout<<"\nTen kwadrat NIE MIESCI sie w tym kole\n";
       cout<<"\nCzy powtorzyc? (T/N)";
       cin>>znak;
       cout<<endl;
   }
   while(znak!='N' && znak!='n');
   cout<<"Kwadrat zmiescil sie w kole "<<i<<" razy."<<endl;
   return 0 ;
}
