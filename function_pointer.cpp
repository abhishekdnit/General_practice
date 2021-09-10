#include<iostream>
using namespace std;

int f1(int);

int f1(int x)
{
 cout<<x;

}

int main()
{
int (*p)(int); // Function pointer declaration

p=f1; // passing address of function f1 to pointer p

p(5); // Calling f1 & Passing value to f1 function by pointer  p, it is same as calling normal function as p(5) is same as f1(5)


 return 0;
}

