#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    const unsigned short rozmiar=300;
    int t[rozmiar];
    int n,j=0,p,q;
    srand(time(0));
    cout<<"Ile liczb (0<n<301) n = ";
    cin>>n;
    cout<<"p = ";
    cin>>p;
    cout<<"q = ";
    cin>>q;

    if(n>0 && n<301)
    {
        for(int i=0; i<n; i++)
            t[i]=rand()%(q-p+1)+p;
        cout<<"Wylosowano liczby: \n";
        for(int i=0; i<n; i++)
        {
            cout<<"t["<<i<<"]= "<<t[i]<<endl;
            if(t[i]<t[n-1])
                j++;
        }
        cout<<"W tablicy jest "<<j<<" wyrazow mniejszch od ostatniego wyrazu tablicy.";
    }

    return 0;
}