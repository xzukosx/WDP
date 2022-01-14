#include<iostream>

using namespace std;

void  linia(int n, char  znak);

int main()
{
   int n;
   cout<<"Podaj wysokosc n = ";
   cin>>n;
   for(int j=1;j<=n;j++)
   {
       linia(n,'0');
       cout<<endl;
   }
   cout<<endl;
   for(int j=1;j<=n;j++)
   {
       linia(j,'A');
       cout<<endl;
   }
   cout<<endl;

   for(int j=1;j<=n;j++)
   {
       linia(n-j,' ');
       linia(j,'%');
       cout<<endl;
   }
   cout<<endl;


   return 0;
}

void  linia(int n, char  znak)
{
    for(int i=0;i<n;i++)
        cout<<znak;
}
