#include<bits/stdc++.h>
using namespace std;

bool checkSorted(int *a,int size)
{   
    int i;
    for(i=0;i<size-1;i++)
    {
        if(a[i]>a[i+1])
        return false;
    }
    return true;
}

int main()
{
  int arr[]={4,8,15,20,26,30,34,56,39,60};
  int i;
  int n=sizeof(arr)/sizeof(arr[0]);
  if(checkSorted(arr,n))
  {
      cout<<"Array is Sorted";
  }
  else
  cout<<"Array is Unsorted";
  return 0;
}
