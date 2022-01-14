#include <iostream>

using namespace std;

int main ()
{
    int tablica[10];
    int min;

    for (int i=0;i<10;i++)
    {
        cout<<"t["<<i<<"]=";
        cin>>tablica[i];
    }
    min=tablica[0];
    for (int j=1;j<10;j++)
    {
        if (tablica[j]<min)
        {
            min = tablica[j];
        }
    }
    cout<<"\nNajmniejszy element ma wartosc: "<<min<<endl;

   return 0 ;
}

