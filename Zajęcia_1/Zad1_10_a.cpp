#include <iostream>

using namespace std;

int main ()
{
   double x_a,x_b,y_a,y_b;
   cout<<"Podaj wspolrzedne punktu A:"<<endl;
   cout<<"x = ";
   cin>>x_a;
   cout<<"y = ";
   cin>>y_a;
   cout<<"\nPodaj wspolrzedne punktu B:"<<endl;
   cout<<"x = ";
   cin>>x_b;
   cout<<"y = ";
   cin>>y_b;
   cout<<"\nRownanie prostej przechodzacej przez punkty A i B ma postac:\n";
   cout<<"y="<<(y_b-y_a)/(x_b-x_a)<<"*x+"<<y_a-(y_b-y_a)/(x_b-x_a)*x_a;
   return 0 ;
}
