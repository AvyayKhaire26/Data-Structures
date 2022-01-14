#include<bits/stdc++.h>
using namespace std;

void display(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    
}

void shift(int *a,int i,int j){
    while(i<j)
    {
        while(a[i]<0)
        {
            i++;
        }
        while(a[j]>=0)
        {
            j--;
        }
        if(i<j)
        swap(a[i],a[j]);
    }
    
}

int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
shift(arr,0,n-1);
display(arr,n);
}
