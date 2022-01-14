#include <iostream>
#include <cmath>// biblioteka zawierajaca  funkcje pierwiastek

using namespace std;

int main ()
{
   double a,b,c,p,P;
   int wybor;
   cout<<"Podaj dlugosc boku  a = ";
   cin>>a;
   cout<<"Podaj dlugosc boku  b = ";
   cin>>b;
   cout<<"Podaj dlugosc boku  c = ";
   cin>>c;
   if(a+b>c && a+c>b && b+c>a)
   {
      cout<<"\nWybierz: ";
      cout<<"\nPole: 0\n";
      cout<<"Obwod: 1\nTwoj wybor: ";
      cin>>wybor;
      p=(a+b+c)/2;
      if(wybor)
      {
          cout<<"\nObwod trojkata wynosi: 2p = "<<p;
      }

      else
      {
          P=sqrt(p*(p-a)*(p-b)*(p-c));
          cout<<"\nPole trojkata wynosi: P = "<<P;
      }
   }
   else
      cout<<"Taki trojkat nie istnieje!";
   return 0 ;
}
