#include<iostream>

using namespace std;

double policz_pole(double a, double b);
double policz_obwod(double a, double b);

int main()
{
   double a,b;
   cout<<"Podaj dlugosci bokow prostokata."<<endl;
   cout<<"Podaj a = ";
   cin>>a;
   cout<<"Podaj b = ";
   cin>>b;
   cout<<"Pole prostokat wynosi: "<<policz_pole(a,b)<<endl;
   cout<<"Obwod prostokat wynosi: "<<policz_obwod(a,b);
   return 0;
}

double policz_pole(double a, double b)
{
    return a*b;
}
double policz_obwod(double a, double b)
{
    return 2*a+2*b;
}
