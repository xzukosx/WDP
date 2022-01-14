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
   int M=a;
   if(b>M)
      M=b;
   if(c>M)
      M=c;
   cout<<"Najwieksza liczba to: "<<M;
   return 0 ;
}
