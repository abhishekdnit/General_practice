#include<iostream>
using namespace std;
int main()
{
int arr[]={10,20,30,40,50,60};
int *ptr1=arr;
int *ptr2=arr+5;
cout<<"No. of elements between two pointers :" <<(ptr2-ptr1);
cout<<"No. of bytes between two pointers : "<<(char*)ptr2-(char*)ptr1;

return 0;
}
