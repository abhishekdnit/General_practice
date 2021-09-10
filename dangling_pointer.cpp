#include<iostream>
using namespace std;
//int x;
int *fun()
{

    static int x=5;  // By making x as static variable its scope will be in whole program,
    return &x;
}

int main()
{

int *p=fun();
cout<<*p;
return 0;

}
