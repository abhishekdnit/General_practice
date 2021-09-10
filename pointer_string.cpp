#include<iostream>
using namespace std;

void swap1(char *x,char *y)
{
    char *t=x;
    x=y;
    y=t;
}

int main()
{

char *x="geeksquiz";
char *y="geeksforgeeks";
char *t;
swap1(x,y);
cout<<x<<"  &  "<<y;
t=x;
x=y;
y=t;
cout<<"\n"<<x<<"  &  "<<y;
return 0;
}
