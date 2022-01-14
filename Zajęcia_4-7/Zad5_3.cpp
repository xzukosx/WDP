#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{
    int tablica[6];
    int licznik=0;
    srand(time(0));

    for (int i=0; i<6; i++)
    {
        tablica[i]=rand()%49+1;
    }
    cout<<"Wylosowane liczby: ";
    for (int j=0; j<6; j++)
    {
        cout<<tablica[j]<<" ";
        if (tablica[j]%2==0)
        {
            licznik++;
        }
    }

    if (licznik>0)
    {
       cout<<"\n\nLiczb parzystych jest: "<<licznik<<endl;
    }else{
        cout<<"\n\nBrak liczb parzystych wsrod wylosowanych"<<endl;
    }

    return 0 ;
}
