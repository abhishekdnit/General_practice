#include<iostream>

using namespace std;

int main()
{
int a=20,b=10;

cout<<"a="<<a<<" b="<<b<<endl;
a=a+b;
b=a-b; //value of a comes to b.
a=a-b; //value of b comes to a. Because now b is a.
cout<<"a="<<a<<" b="<<b;

return 0;

}
