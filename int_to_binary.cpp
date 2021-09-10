#include<iostream>

using namespace std;

int main()
{

    int i=0,n,r,q=1,m;

    cout<<"Enter the integer = ";
    cin>>n;
    m=n;
    while(q!=0)
    {
        r=n%2;
        if(r==1)
            i++;
        q=n/2;

        n=q;
    }

    cout<<"No. of set bit 1s in "<<m<<" is "<<i;

}
