#include<iostream>

using namespace std;

int dwa_do_n(unsigned int n);
double dwa_do_n(int n);

int main()
{
   unsigned int m;
   int n;
   cout<<"Podaj wykladnik n = ";
   cin>>n;
   if(n>=0)
   {
       m=n;
       cout<<"2^n = "<<dwa_do_n(m);
   }
   else
       cout<<"2^n = "<<dwa_do_n(n);
   return 0;
}

int dwa_do_n(unsigned int n)
{
    int y=1;
    for(int i=0;i<n;i++)
        y=y*2;
    return y;

}

double dwa_do_n(int n)
{
    double y=1;
    for(int i=n;i<0;i++)
        y=y*0.5;
    return y;

}
