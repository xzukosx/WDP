#include <iostream>

using namespace std ;

int main ()
{
   int a,b,c,w_a,w_b,w_c;
   cout<<"Podaj a: ";
   cin>>a;
   cout<<"Podaj wage a: ";
   cin>>w_a;
   cout<<"Podaj b: ";
   cin>>b;
   cout<<"Podaj wage b: ";
   cin>>w_b;
   cout<<"Podaj c: ";
   cin>>c;
   cout<<"Podaj wage c: ";
   cin>>w_c;
   if(w_a>=0 && w_b>=0 && w_c>=0 && w_a*w_a+w_b*w_b+w_c*w_c>0)
      cout<<"Srednia wazona z liczb a,b,c wynosi: "<<double(w_a*a+w_b*b+w_c*c)/(w_a+w_b+w_c);
   else
      cout<<"Wagi musza byc nieujemne i przynajmniej jedna dodatnia!";
   return 0 ;
}
