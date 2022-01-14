#include<iostream>
#include <cstdlib>    //srand, rand, RAND_MAX, system
#include <ctime>

using namespace std;

void losuj(int* a, int n, int x, int y);

void wypisz(int* a, int k);


int main()
{
   int n,a,b;
   cout<<"Podaj n = ";
   cin>>n;
   int *t=new int[n];
   cout<<"Podaj poczatek zakresu losowania a=";
   cin>>a;
   cout<<"Podaj koniec zakresu losowania b=";
   cin>>b;
   losuj(t,n,a,b);
   cout<<"Tablica: "<<endl;
   wypisz(t,n);
   delete []t;
   return 0;
}

void losuj(int* a, int n,int x, int y)
{
    srand(time(0));
    for(int i=0;i<n;i++)
    {
       a[i]=rand()%(y-x+1)+x;
    }
}

void wypisz(int* a, int k)
{
   for(int i=0;i<k;i++)
       cout<<"a["<<i<<"] = "<<a[i]<<endl;
}



