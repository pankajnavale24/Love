//Move all negative numbers to beginning and positive to end with constant extra space
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the size of an array : ";
    cin>>x;

    int arr[x];
    cout<<"Enter the "<<x<<" Elements : "<<endl;
    for(int i=0;i<x;i++)
        cin>>arr[i];


    // sort(arr , arr+x);


     cout<<"sorted array"<<endl;
     for(int i=0;i<x;i++)
        cout<<arr[i]<<" ";



}
