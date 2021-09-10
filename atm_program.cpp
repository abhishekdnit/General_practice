//ATM_Program....

#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
int a,n,notes;
cout<<"Enter the Amount in Rs.= ";
cin>>a;
cout<<"\nEnter the notes of preferred denomination= ";
cin>>n;

switch(n)
{
    default:cout<<"\nEnter only valid notes";
    break;

case 100:

    notes=a/100;
    a%=100;
    cout<<"\nNo. of 100 Rs Notes= "<<notes;

case 50:

    notes=a/50;
    a%=50;
    cout<<"\nNo. of 50 Rs Notes= "<<notes;

case 20:

    notes=a/20;
    a%=20;
    cout<<"\nNo. of 20 Rs Notes= "<<notes;

case 10:

    notes=a/10;
    a%=10;
    cout<<"\nNo. of 10 Rs Notes= "<<notes;


case 5:

    notes=a/5;
    a%=5;
    cout<<"\nNo. of 5 Rs Notes= "<<notes;

case 2:

    notes=a/2;
    a%=2;
    cout<<"\nNo. of 2 Rs Notes= "<<notes;

case 1:

    notes=a/1;
    a%=1;
    cout<<"\nNo. of 1 Rs Notes= "<<notes;
}

return 0;

}
