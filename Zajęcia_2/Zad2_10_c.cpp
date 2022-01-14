#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
   int a;
   cout<<"Podaj a = ";
   cin>>a;

    string wyraz ="*";
    string wyraz2 =" ";
   if(a>0)
   {
       for(int i=1;i<=a;i=i+1)//funkcja ceil zapewnia poprawnosc nawet dla liczb niecalkowitych
         {
             for (int j=1;j<=2*a-1;j=j+1){
                if (j<a+i && j>a-i){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
             }
            cout<<endl;
         }
   }
   return 0;

}
