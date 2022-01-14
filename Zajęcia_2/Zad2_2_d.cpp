
/*
*******************************************************************************************
Czwarty podpunkt zadania 2_2
Liczymy sume liczb calkowitych z [a,b] - klasyczna metoda liczenia sumy
*******************************************************************************************
*/
#include <iostream>
#include <cmath>


using namespace std;

int main()
{

   double a,b,s=0;//s bedzie suma, na poczatek rowna 0
   cout<<"Podaj a = ";
   cin>>a;
   cout<<"\nPodaj b = ";
   cin>>b;
   if(a<b)
   {
       for(int i=ceil(a);i<=b;i=i+1)
        s=s+i;//dodajemy i do sumy poprzednich liczb
   }
   else
   {
       cout<<"\nBledny przedzial!";
   }cout<<"Suma = "<<s;
   return 0;
}
