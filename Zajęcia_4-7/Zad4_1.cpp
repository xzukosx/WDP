/*
*******************************************************************************************
Wczytujemy n liczb calkowitych do tablicy (statycznej) o zadanym rozmiarze.
Liczymy ile jest wyrazow mniejszych od ostatniego wyrazu (ostatnio wprowadzonego!)

Uwaga! Uzywajac tablicy statycznej, zgodnie ze standardem jezyka, musimy zadeklarowac
tablice o rozmiarze stalym i zadbac, aby uzytkownik wprowadzil liczbe wyrazow nie wieksza
od rozmiaru. Program operuje tylko na tej czesci tablicy, ktora wypelnil uzytkownik.
*******************************************************************************************
*/
#include<iostream>
using namespace std;


int main()
{
    const unsigned short rozmiar=20;//deklarujemy stala definiujaca rozmiar tablicy
    int t[rozmiar];//deklaracja tablicy statycznej o wyrazach typu int
    int n,licznik=0;//licznik jest licznikiem wyrazow spelniajcych warunek
    cout<<"Ile liczb (0<n<21) n = ";
    cin>>n;
    if(n>0 && n<21)//program ma dzialac tylko dla n z zakresu rozmiaru tablicy
    {
        cout<<"Podaj wyraz (musi to byc liczba calkowita): "<<endl;
        for(int i=0; i<n;i++)
            //wypelniamy tablice n wyrazami. Uwaga! Pozostale wyrazy maja przypadkowe wartosci!
            //nalezy zwrocic uwage na indeksowanie tablicy od zera
        {
            cout<<"t["<<i<<"]= ";
            cin>>t[i];
        }
        for(int i=0;i<n;i++)
            //petla zliczajaca ile jest wyrazow mniejszych od ostatniego wyrazu, czyli od  t[n-1],
            //a nie odfizycznie ostatniego elemntu zadeklarowanejj tablicy
            if(t[i]<t[n-1])
                licznik++;
        cout<<"W tablicy jest "<<licznik<<" wyrazow mniejszch od ostatniego wyrazu tablicy.";
    }

    return 0;
}

