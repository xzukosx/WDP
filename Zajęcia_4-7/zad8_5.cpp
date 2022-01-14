#include<iostream>
#include <cstdlib>    //srand, rand, RAND_MAX, system
#include <ctime>

using namespace std;

void losuj(int* a, int n, int x, int y);

void wypisz(int* a, int k);

void zamien(int* x, int* y);

void odwroc(int* a, int n);

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
   cout<<"Tablica oryginalna: "<<endl;
   wypisz(t,n);
   odwroc(t,n);
   cout<<"Tablica po odwroceniu: "<<endl;
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

void zamien(int* x, int* y)
{
    int temp;
    temp= *x;
    *x=*y;
    *y=temp;
}


void odwroc(int* a, int n)
{
    for(int i=0; i<n/2;i++)
        zamien(a+i,a+(n-i-1));
}

