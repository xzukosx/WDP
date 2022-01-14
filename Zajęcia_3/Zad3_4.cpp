#include <iostream>

using namespace std;

int main()
{
   int licznik_rozne_zero=0;
   int licznik_dodatnie=0;
   int licznik_ujemne=0;
   int x;
   cout<<"Podaj liczby. Wartosc zero konczy wczytywanie.\n\n";
   do
   {
       cout<<"\nPodaj liczbe: ";
       cin>>x;
       if(x>0)
       {
           cout<<licznik_rozne_zero<<": "<<x<<endl;
		   cout<<"liczba dodatnia"<<endl;
           licznik_dodatnie++;
		   licznik_rozne_zero++;
       }

       else 
	   {if(x<0)
			{
             cout<<licznik_rozne_zero<<": "<<x<<endl;
		     cout<<"liczba dodatnia"<<endl;
             licznik_ujemne++;
			 licznik_rozne_zero++;
			}
	   }

   }
   while(x!=0);
   cout<<licznik_rozne_zero<<": "<<x<<endl;
   cout<<"Liczba wczytanych liczb roznych od zera: "<<licznik_rozne_zero-1<<endl;
   cout<<"w tym dodatnich: "<<licznik_dodatnie<<endl;
   cout<<"w tym ujemnych: "<<licznik_ujemne<<endl;
   return 0 ;
}