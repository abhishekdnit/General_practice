#include<iostream>
#include<malloc.h>
#include<stdlib.h>


using namespace std;

struct lists
{
int data;
struct lists *next;

}*start;

int main()
{
    start=NULL;
    int n,value;
    while(1)
    {
        cout<<"\nEnter 1 to add elements in the linked list: ";
        cout<<"\nEnter 2 to display elements in the linked list: ";
        cout<<"\nEnter 3 to reverse the elements in the linked list: ";
        cout<<"\nEnter 0 for exit \n";
        cout<<"Enter choice: ";
        cin>>n;
        switch(n)
        {
        case 1:
        cout<<"Enter the element :";
        cin>>value;
        void create(int);
        create(value);
        break;

        case 2:
        void display();
        display();
        break;

        case 3:
        void reverse();
        reverse();
        break;

        case 0:
        exit(0);

        }

    }
return 0;
}

void create(int value)
{
    struct lists *tmp,*ptr;

    tmp=(struct lists*)malloc(sizeof(struct lists));  // In C++ , lists *tmp=new lists();
    tmp->data=value;
    tmp->next=NULL;

    if(start==NULL)
        start=tmp;
    else
    {
        ptr=start;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }

        ptr->next=tmp;
    }

}

void display()
{
    struct lists *p;
    p=start;

    while(p!=NULL)
    {
        cout<<p->data<<"\t";
        p=p->next;
    }

}

void reverse()
{
    struct lists *p,*q,*r;
    p=start;
    q=p->next;
    r=q->next;
    p->next=NULL;
    while(r!=NULL)
    {
        q->next=p;
        p=q;
        q=r;
        r=r->next;

    }
    q->next=p;
    start=q;
}
