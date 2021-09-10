// C program to show how to read
// entire string using scanf()

#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int x,f=1;
    cout<<"x= ";
    cin>>x;

    while(x!=1)
    {
      f*=x;
      --x;
    }

    cout<<"f= "<<f;
    return 0;
}
