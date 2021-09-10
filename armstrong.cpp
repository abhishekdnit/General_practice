//Armstrong No. : Sum of cube of each three digit number is equal to number.Ex: 371=27+343+1=371

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
int i,a,b=1,c,r;

cout<<"Armstrong No. are: ";

for(i=100;i<=999;i++)
{
    a=i;
    c=0;
    while(a>0)
    {
     r=a%10;
     a/=10;
     b=r*r*r;
     c=c+b;

    }

    if(i==c)
        cout<<c<<",";

}

return 0;

}
