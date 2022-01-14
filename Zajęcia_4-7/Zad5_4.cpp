#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{
    int tablica[20];
    int min,max,index_min=0,index_max=0;
    srand(time(0));

    for (int i=0; i<20; i++)
    {
        tablica[i]=rand()%100+1;
    }
    min=tablica[0];
    max=tablica[0];

    cout<<"Wylosowane liczby: ";
    for (int j=0; j<20; j++)
    {
        cout<<tablica[j]<<" ";
        if(tablica[j]<min)
        {
            min = tablica[j];
            index_min = j;
        }
        if(tablica[j]>max)
        {
            max = tablica[j];
            index_max = j;
        }
    }
    cout<<"\n\nMax="<<max<<" Min="<<min<<endl;
    tablica[index_min]=max;
    tablica[index_max]=min;
    cout<<"\nPo zamianie min i max: ";
    for (int k=0; k<20; k++)
    {
        cout<<tablica[k]<<" ";
    }
    cout<<endl;

    return 0 ;
}