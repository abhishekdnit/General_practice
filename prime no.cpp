//Find Entered no. is Prime no....


#include <stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int p,i=2,s;
bool a=true;

 cout<<"p= ";
 cin>>p;
// if(n%2==0)
 //   cout<<"Entered No is not a Prime no.\n";

        if(p==1)
            cout<<"Not prime\n";
        else if(p==2)
            cout<<"Prime\n";
        else if(p==3)
            cout<<"Prime\n";
        else if(p%2==0)
            cout<<"Not prime\n";
        else if(p%3==0)
            cout<<"Not prime\n";
        else
        {
         s=sqrt(p);
         while(i<=s)
        {
         i++;
         if(p%i==0)
         {
            a=false;
            break;
         }

        }
        if(a)
         cout<<"Prime\n";
         else
         cout<<"Not prime\n";
        }

return 0;

}
