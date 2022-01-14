/*
*******************************************************************************************
Losowanie liczb z podanego zakresu do tablicy dynamicznej jednowymiarowej.
Sprawdzanie ró¿nowartoœciowoœci tablicy metod¹ podwójnej pêtli.
*******************************************************************************************
*/

#include<iostream>
#include <cstdlib>    //srand, rand, RAND_MAX, system
#include <ctime>

using namespace std;


int main()
{
    int rozmiar;
    cout<<"Podaj rozmiar tablicy: ";
    cin>>rozmiar;
    int *t=new int[rozmiar];
    srand(time(0));
    for(int i=0; i<rozmiar;i++)
        t[i]=rand()%110-5;

    for(int i=0; i<rozmiar;i++)
        cout<<"t["<<i<<"]= "<<t[i]<<endl;

    bool rozne=true;
    for(int i=0;i<rozmiar-1 && rozne==true;i++)
        for(int j=i+1;j<rozmiar && rozne==true;j++)
            if(t[i]==t[j])
            {
                rozne=false;
                cout<<"W tablicy powtarza sie (przykladowo) liczba "<<t[i];
            }

    if(rozne)
        cout<<"Tablica zawiera rozne elementy";


    delete []t;

    return 0;
}

