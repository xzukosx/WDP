#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
   int a;
   cout<<"Podaj a = ";
   cin>>a;

    string wyraz ="*";
   if(a>0)
   {
       for(int i=1;i<=a;i=i+1)//funkcja ceil zapewnia poprawnosc nawet dla liczb niecalkowitych
         {

            cout<<wyraz<<endl;
            wyraz=wyraz+"*";
         }
   }



   return 0;

}