#include<iostream>
using namespace std;
int main()
{
 int x=5;
 float y=6.2;
 void *p;

 p=&y;
 p=&x;
 cout<<"x= "<<*(int*)p<<" y= "<<*(float*)p;
 return 0;

}

