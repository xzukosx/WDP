#include <iostream>
#include <cmath>

using namespace std;

int main ()
{

    int a,b,licznik,mianownik;

    cout<<"Podaj licznik: ";
    cin>>a;
    licznik=a;
    cout<<"Podaj mianownik: ";
    cin>>b;
    mianownik=b;

    while(a!=b)
    {
        if(a<b)
        {
            b=b-a;
        }else
        {
            a=a-b;
        }
    }

    licznik=licznik/a;
    mianownik=mianownik/a;

    if (licznik/mianownik!=0)
    {
        if (licznik!=mianownik)
        {
            if (licznik%mianownik==0)
            {
                cout<<licznik/mianownik;
            }
            else
            {
               cout<<licznik/mianownik<<" "<<licznik-licznik/mianownik * mianownik<<"/"<<mianownik;
            }
        }
        else
        {
            cout<<"1";
        }

    }
    else
    {
       cout<<licznik-licznik/mianownik * mianownik<<"/"<<mianownik;
    }


    return 0 ;
}
