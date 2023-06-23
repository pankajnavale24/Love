#include<iostream>
#include<bits/stdc++.h>

using namespace std;
//Find the maximum and minimum element in an array
int main()
{
    int a[]={'A','B','Z','I', 'p','r','a','n','j'};
    int size=sizeof(a)/sizeof(a[0]);

 /* int min=a[0];
    int max=a[0];
    for(int i=0;i<size;++i)
    {
        if(min>a[i])
        min=a[i];
        if(max<a[i])
        max=a[i];
    }
    */
    sort(a,a+size);
    int max=a[size-1];
    int min=a[0];
    cout<<" maximum : "<<max<<endl<<"minimum : "<<min;

}

