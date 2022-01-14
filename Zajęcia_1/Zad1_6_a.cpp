#include <iostream>

using namespace std ;

int main ()
{
   int a,b,c;
   cout<<"Podaj a: ";
   cin>>a;
   cout<<"Podaj b: ";
   cin>>b;
   cout<<"Podaj c: ";
   cin>>c;
   cout<<"Srednia z liczb a,b,c wynosi: "<<double(a+b+c)/3<<endl;
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
   return 0 ;
}

