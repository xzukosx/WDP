#include <iostream>

using namespace std;

int main ()
{
   double t;
   cout<<"Podaj temperature (C) = ";
   cin>>t;
   cout<<"Temperatura (C) = "<<t<<endl;
   cout<<"Temperatura (K) = "<<t+273.15<<endl;
   cout<<"Temperatura (F) = "<<32+1.8*t<<endl;
   return 0 ;
}
