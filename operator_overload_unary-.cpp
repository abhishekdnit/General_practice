#include<iostream>

using namespace std;

class abhi
{
    int a;
public:
    void set(int a1)
    {
        a=a1;
    }

    int show()
    {
       return a;
    }

    abhi operator -()
    {
        abhi obj;
        obj.a=-a;
      return obj;
    }
};

int main()
{
abhi obj1,obj2;
int a1;

obj1.set(3);
cout<<"a= "<<obj1.show();

obj2=-obj1;
cout<<"\na= "<<obj2.show();


return 0;
}
