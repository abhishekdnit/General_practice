#include<iostream>
using namespace std;
char revers(char&);

char revers(char *b)
{
    int l,i;

for(l=0;*(b+l)!='\0';l++);
cout<<"Length of string = "<<l;
//revers(l,p);
//cout<<"Reversed string = "<<s;
    char t;

 for(i=0;i<l/2;i++)
 {
        t=*(b+i);
   *(b+i)=*(b+l-1-i);
   *(b+l-1-i)=t;
 }
cout<<"\n"<<b;
}
int main()
{
char s[10]="Computer",*p;
//int i,l;
p=&s[0];

revers(p);
return (0);


}
