/*
*******************************************************************************************
Modyfikacja zadania 4_1. Wyrazy sa losowane
Losujemy n liczb calkowitych do tablicy (statycznej) o zadanym rozmiarze.
Wypisujemy wyrazy i liczymy ile jest wyrazow mniejszych od ostatniego wyrazu
(ostatnio wylosowanego!)
*******************************************************************************************
*/
#include <iostream>
#include <cstdlib>    //biblioteka z funkcjami losujacymi srand, rand - zob. losowanie.cpp
#include <ctime>      //biblioteka z funkcja time

using namespace std;

int main()
{
    const unsigned short rozmiar=300;
    int t[rozmiar];
    int n,j=0,p,q;
    srand(time(0));    //inicjalizacja generatora liczb pseudolosowych
    cout<<"Ile liczb (0<n<301) n = ";
    cin>>n;

    if(n>0 && n<301)
    {
        for(int i=0; i<n;i++)
           t[i]=rand()%21;//losowanie oraz obciecie wylosowanej liczby do zadanego przedzialu
        cout<<"Wylosowano liczby: \n";
        for(int i=0;i<n;i++)//petla wypisywanie i zliczania
        {
            cout<<"t["<<i<<"]= "<<t[i]<<endl;
            if(t[i]<t[n-1])
                j++;
        }
        cout<<"W tablicy jest "<<j<<" wyrazow mniejszch od ostatniego wyrazu tablicy.";
    }

    return 0;
}

