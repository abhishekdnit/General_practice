//

#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int x,p=1,r;

    cout<<"x= ";
    cin>>x;

    while(x!=0)
    {
        r=x%10;
        x/=10;
        p*=r;

    }
    cout<<"p= "<<p;
    return 0;
}
