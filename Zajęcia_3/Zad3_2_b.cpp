#include <iostream>

using namespace std;

int main()
{
   char znak;//zmienna typu znakowego
   do
   {
       cout<<"Hello World!\n";
       cout<<"\nCzy powtorzyc? (T/N)";
       cin>>znak;
   }
   while(znak!='N' && znak!='n');//zwrocic uwage na sposob zapisania stalej znakowej
   return 0 ;
}
