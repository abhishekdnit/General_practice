//Sum of digits  until reduced to 1 digit...


#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
int x,n,sum=0,r,one;

cout<<"n= ";
cin>>n;
do
{

while(n>0)
{
  r=n%10;
  n/=10;
  sum+=r;
}

n=sum;

}while((n/10)>0);

cout<<n;
cout<<"\n";
return 0;

}
