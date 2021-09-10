#include<iostream>
#include<ctime>
#include<stdlib.h>

using namespace std;

int main()
{
    int a[52],i;

    for(i=0;i<52;i++)
        a[i]=i+1;

    void shuffle(int[],int);

    shuffle(a,52);

    cout<<"Random card No. : \n";
    for(i=0;i<52;i++)
        cout<<a[i]<<"\t";


}

void shuffle(int a[],int n)
{
    srand(time(0));

    //cout<<"srand = "<<j;

    int i,r;

    for(i=0;i<52;i++)
    {
        r=i+(rand()%(52-i));
        swap(a[i],a[r]);
       // cout<<rand()<<endl;

    }

}
