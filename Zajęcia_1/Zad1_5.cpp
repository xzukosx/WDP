#include <iostream>

using namespace std ;

int main ()
{
   int rok;
   cout<<"Podaj rok: ";
   cin>>rok;
   if(rok%4==0 && rok%100!=0 || rok%400==0)
      cout<<endl<<"Rok "<<rok<<" jest przestepny.";
   else
      cout<<endl<<"Rok "<<rok<<" nie jest przestepny.";
   return 0 ;
}
