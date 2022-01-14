#include<iostream>

using namespace std;

int suma(int a, int b, int c=0, int d=0, int e=0);

int main()
{
   int a,b,c,d,e;
   cout<<"Podaj a = ";
   cin>>a;
   cout<<"Podaj b = ";
   cin>>b;
   cout<<"Podaj c = ";
   cin>>c;
   cout<<"Podaj d = ";
   cin>>d;
   cout<<"Podaj e = ";
   cin>>e;
   cout<<"a+b = "<<suma(a,b)<<endl;
   cout<<"a+b+c = "<<suma(a,b,c)<<endl;
   cout<<"a+b+c+d = "<<suma(a,b,c,d)<<endl;
   cout<<"a+b+c+d+e = "<<suma(a,b,c,d,e)<<endl;
}

int suma(int a, int b, int c, int d, int e)
{
    return a+b+c+d+e;
}
