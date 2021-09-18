#include<iostream>
using namespace std;
int search(int arr[], int n, int x)
{
  int low=0, high=n-1;
  while(low<=high)
  {
    int mid=(low+high)/2;
    if(arr[mid]==x)
    return mid;
    if(arr[mid]>arr[low])
    {
      if(x>=arr[low] && x<arr[mid])
      high=mid-1;
      else
      low=mid+1;
    }
    else
    {
      if(x>arr[mid] && x<=arr[high])
      low=mid+1;
      else
      high=mid-1;
    }
  }
  return -1;
}

int main()
{
  int n;
  cout<<"Enter the number of array elements: ";
  cin>>n;
  int arr[n];  
  cout<<"Enter the sorted rotated array elements: ";
  for(int i=0; i<n; i++)
  cin>>arr[i];
  int x;
  cout<<"Enter the number to search: ";
  cin>>x;
  cout<<"The index of the element is: "<<search(arr, n, x);
  return 0;
}