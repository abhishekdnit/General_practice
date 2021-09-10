#include<stdio.h>

int main()
{

    int a=0,b=1,c,fab=0;
    printf("Enter the last element of fabonacci series: ");
    scanf("%d",&c);

    printf("%d %d ",a,b);
    for(int i=1;fab!=c;i++)
    {
        fab=a+b;
        printf("%d ",fab);
        a=b;
        b=fab;
    }


    return 0;
}
