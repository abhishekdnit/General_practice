//Sum of series 1,2,4,7,11,16,23................


#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
int n,i,s=0,t=1;
cout<<"n= ";
cin>>n;

for(i=1;i<=n;i++)
{
    s+=t;
    t=t+i;
}

cout<<"n= "<<n<<"\n";
cout<<"s= "<<s;
return 0;

}
