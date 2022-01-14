#include <iostream>

using namespace std;

int main ()
{
   double w;
   const double kurs= 4.19;
   int wybor;
   cout<<"Wybierz opcje:"<<endl;
   cout<<"1 - przeliczenie z Euro na PLN"<<endl;
   cout<<"2 - przeliczenie z PLN na Euro"<<endl;
   cin>>wybor;
   if(wybor==1)
   {
       cout<<"Podaj kwote w Euro: ";
       cin>>w;
       cout<<"\n"<<w<<" Euro to "<<w*kurs<<" PLN (przy kursie "<<kurs<<" PLN/Euro)";
   }
   else
   {
       cout<<"Podaj kwote w PLN: ";
       cin>>w;
       cout<<"\n"<<w<<" PLN to "<<w/kurs<<" Euro (przy kursie "<<kurs<<" PLN/Euro)";
   }
   return 0 ;
}
