//Using Kadane's Algorithm
#include<iostream>

using namespace std;

int Maxsubarray(int[],int);

int main()
{
    int arr[]={-2, -3, 4, -1, -2, 1, 5, -3},size,maxsum;
    size=sizeof(arr)/sizeof(arr[0]);

    maxsum=Maxsubarray(arr,size);
    cout<<"\nsize = "<<size;

    cout<<"\nmaxsum = "<<maxsum;
    return 0;
}

int Maxsubarray(int arr[],int size)
{
    int i,j,max_last=0,max_curr=0,s=0,end=0,start=0;

    for(i=0;i<size;i++)
    {
        max_curr+=arr[i];

            if(max_curr<0)   //key
            {
                max_curr=0;
                s=i+1;
            }

            else if(max_last<max_curr)
            {
                max_last=max_curr;
                start=s;
                end=i;
            }

    }
    cout<<"start index = "<<start;
    cout<<"\nEnd index = "<<end;
return max_last;
}
