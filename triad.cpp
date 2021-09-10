//Triad Program...

#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n,a,b,n1,a1,b1,i;

    cout<<"Enter n 3 digit No. to create its Triad= ";
    cin>>n;

    a=n*2;
    b=n*3;
//cout<<a<<"\n";
//cout<<b<<"\n";
    n1=n;
    a1=a;
    b1=b;
    for(i=0;n1!=0;i++)
    {
        n1/=10;
    }

    if(i!=3)
        cout<<"OOPs!! Entered No. should be 3 digit... ";

    else
    {
      for(i=0;a1!=0;i++)
     {
        a1/=10;
     }
     if(i!=3)
        cout<<"OOPs!! Triad can't be genernted for No. "<<n;
     else
     {
        for(i=1;b1!=0;i++)
      {
        b1/=10;
      }
      cout<<"Genernted Triad is=   "<<n<<"\t"<<a<<"\t"<<b;
     }

    }

    return 0;
}
