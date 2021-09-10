
#include <stdio.h>
#include<iostream>

using namespace std;
int main()
{
    int x,r,d=1,q=0;
    cout<<"x= ";
    cin>>x;

    while(x>0)
    {
      r=x%10;

      q=(q+d*r);

      x/=10;

      d*=2;
    }

    cout<<"q= "<<q;
    return 0;
}


