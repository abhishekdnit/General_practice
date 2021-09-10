// C program to show how to read
// entire string using scanf()

#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int d,*r,o,i=0;
   // static int k=0;
    r=new int[10];
    cout<<"d= ";
    cin>>d;

    while(d!=0)
    {
    r[i]=d%16;
    d=d/16;
    i++;
    }
    cout<<"\n"<<i;
    cout<<"\n= ";
    for(int j=i-1;j>=0;j--)
    {
        cout<<r[j];
    }
    delete r;
	return 0;
}
