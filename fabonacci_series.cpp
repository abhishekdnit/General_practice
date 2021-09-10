//fabonacci series 1,1,2,3,5,8,13,21,34,55................


#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
int n,a=1,b=0,c;
cout<<"n= ";
cin>>n;

for(int i=1;i<=n;i++)
{
  c=a+b;
  cout<<c<<",";
  a=b;
  b=c;
}

//cout<<"n= "<<n<<"\n";
//cout<<"c= "<<s;
return 0;

}
