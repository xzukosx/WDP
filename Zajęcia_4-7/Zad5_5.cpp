#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{
    int tablica[20];
    int max;
    srand(time(0));

    for (int i=0; i<20; i++)
    {
        tablica[i]=rand()%100+1;
    }
    cout<<"Nieposortowane liczby: ";
    for (int j=0; j<20; j++)
    {
        cout.width(3);
        cout<<tablica[j]<<" ";
    }
    max=tablica[0];
    for (int i=0; i<20; i++)
    {
        for (int j=0; j<19; j++)
        {
            if (tablica[j]>tablica[j+1])
            {
                max = tablica[j];
                tablica[j] = tablica[j+1];
                tablica[j+1] = max;
            }
        }
    }
    cout<<"\nPosortowane liczby   : ";
    for (int j=0; j<20; j++)
    {
        cout.width(3);
        cout<<tablica[j]<<" ";
    }
    cout<<endl;
    return 0 ;
}