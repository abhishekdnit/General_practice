#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str,sub,s;
    int l,n,c=0;
    cout<<"String: ";
    cin>>str;
    cout<<"Substring: ";
    cin>>sub;

    l=str.length();
    n=sub.length();

    for(int i=0;i<l-n+1;i++)
    {
        //Acout<<i<<endl;
        s=str.substr(i,i+n-1);
        if(str.compare(i,3,sub)==0)
        //if(s==sub)
            c=c+1;
    }

    cout<<"frequency of occurence of substring: "<<c;


}
