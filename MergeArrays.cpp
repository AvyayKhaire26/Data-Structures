#include<iostream>
using namespace std;

void mergeArray(int arr1[],int arr2[],int arr3[],int n,int m)
{
    int i=0,j=0,k=0;
    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
        arr3[k++]=arr1[i++];
        else
        arr3[k++]=arr2[j++];
    }
    while(i<n)
    arr3[k++]=arr1[i++];
    while(j<m)
    arr3[k++]=arr2[j++];
}

int main()
{
    int a[]={1,3,5,7,9};
    int b[]={2,4,6,8,10,12,14,16};
    int aSize=sizeof(a)/sizeof(a[0]);
    int bSize=sizeof(b)/sizeof(b[0]);
    int c[aSize+bSize];
    mergeArray(a,b,c,aSize,bSize);
    for(int i=0;i<aSize+bSize;i++)
    cout<<c[i]<<" ";
    return 0;
}
