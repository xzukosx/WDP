#include<iostream>

using namespace std;

void wypisz(int a[], int k);

int main()
{
   const int n=10;
   int t[n];
   int k;
   for(int i=0;i<n;i++)
   {
       cout<<"Podaj t["<<i<<"] = ";
       cin>>t[i];
   }
   cout<<"Podaj k = ";
   cin>>k;
   wypisz(t,k);

   return 0;
}

void wypisz(int a[], int k)
{
   for(int i=0;i<k;i++)
       cout<<"t["<<i<<"] = "<<a[i]<<endl;
}


