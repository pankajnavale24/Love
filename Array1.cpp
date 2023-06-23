#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reversearray(int arr[],int l, int r)
{
    while(l<=r)
    {
        int temp=arr[l];
        arr[l]=arr[r];
        arr[r]=temp;
        l++;
        r--;
    }
}
int main()
{
    int a[]={3,6,8,9,5};
    int size=sizeof(a)/sizeof(a[0]);

    //function to reverse an array

    reversearray(a,0,size-1);

    for(int i=0;i<size;++i)
    {
        cout<<a[i]<<" ";
    }


}
