/*
*******************************************************************************************
Wprowadzanie zawartoœci tablicy dynamicznej jednowymiarowej.
Dodatkowo wyzanczanie najmniejszego elementu tej tablicy
*******************************************************************************************
*/
#include<iostream>
using namespace std;


int main()
{
    int rozmiar;
    int m;
    cout<<"Podaj rozmiar tablicy: ";
    cin>>rozmiar;
    int *t=new int[rozmiar];
    cout<<"Podaj wyraz (musi to byc liczba calkowita): "<<endl;
    for(int i=0; i<rozmiar;i++)
    {
        cout<<"t["<<i<<"]= ";
        cin>>t[i];
    }
    m=t[0];
    for(int i=1;i<rozmiar;i++)
        if(t[i]<m)
            m=t[i];
    cout<<"Najmniejszy wyraz tablicy: "<<m;
    delete []t;

    return 0;
}

