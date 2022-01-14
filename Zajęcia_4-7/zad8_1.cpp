#include<iostream>

using namespace std;

int mniejsza(int a, int b);
bool czy_rozne(int a, int b);

int main()
{
   const int n=10;
   int t[n];
   int a=5,b=7;
   for(int i=0;i<n;i++)
   {
       cout<<"Podaj t["<<i<<"] = ";
       cin>>t[i];
   }
   for(int i=0;i<n-1;i++)
   {
       if(czy_rozne(t[i],t[i+1]))
           cout<<"min(t["<<i<<"],t["<<i+1<<"]) = "<<mniejsza(t[i],t[i+1])<<endl;
       else
           cout<<"Wyrazy t["<<i<<"] oraz t["<<i+1<<"]) sa takie same"<<endl;
   }

   return 0;
}

int mniejsza(int a, int b)
{
    if(a<b)
        return a;
    return b;
}

bool czy_rozne(int a, int b)
{
    if(a!=b)
        return true;
    return false;
}
