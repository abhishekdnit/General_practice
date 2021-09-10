//Valid or Invalid Date....

#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
char slash_dummy;
int d,m,y,flag=1;
cout<<"Enter a date from Year 1850 to 2050 (dd/mm/yyyy)= ";
cin >> d >> slash_dummy >> m >> slash_dummy >> y;

if(flag)
{

if(d<1||d>31)
    {cout<<"Invalid date";
    flag=0;
    }
if(m<1||m>12)
    {cout<<"Invalid date";
    flag=0;
    }
if(y<1850||y>2050)
    {cout<<"Invalid date";
    flag=0;
    }
else
{
    if((m==4)||(m==6)||(m==9)||m==11)
    {
        if(d>30)
        {
            cout<<"Invalid date";
            flag=0;
        }
}
}

if(m==2)
{
    if(y%4==0 && d>29)
      {cout<<"Invalid date";
      flag=0;
      }
    if (y%4!=0 && d>28)
      {cout<<"Invalid date";
      flag=0;
      }
}

}

//cout<<"\nflag= "<<flag;

if(flag)
    cout<<"\nValid date";

return 0;

}
