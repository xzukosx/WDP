#include <iostream>

using namespace std;

int main ()
{
    int tablica[10];
    int max,n,licznik=0,suma=0;
    cout<<"Ile elemntow chcesz dodac do tablicy [1,10]? ";
    cin>>n;

    for (int i=0; i<n; i++)
    {
        cout<<"t["<<i<<"]=";
        cin>>tablica[i];
    }
    max=tablica[0];
    for (int j=0; j<n; j++)
    {
        if (max<tablica[j])
        {
            max = tablica[j];
        }
    }
    for (int k=0; k<n; k++)
    {
        if (tablica[k]!=max)
        {
            suma+=tablica[k];
            licznik++;
        }
    }
    if (licznik>0)
    {
       cout<<"\nSrednia wynosi: "<<suma/(licznik*1.0)<<endl;
    }else{
        cout<<"\nNie mozna wyznaczyc sredniej"<<endl;
    }
    return 0 ;
}
