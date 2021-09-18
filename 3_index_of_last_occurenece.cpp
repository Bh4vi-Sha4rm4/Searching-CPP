#include<iostream>
using namespace std;
int lastocc(int arr[], int n, int x)
{
  int low=0, high=n-1;
  while(low<=high)
  {
    int mid=(low+high)/2;
    if(x > arr[mid])
      low=mid+1;
    else if(x < arr[mid])
      high=mid-1;
    else
    {
      if(mid==n-1 || arr[mid+1]!=arr[mid])
        return mid;
      else
        low=mid+1;
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
  cout<<"Enter the array elemets: ";
  for(int i=0; i<n; i++)
  cin>>arr[i];
  int x;
  cout<<"Enter the element to search: ";
  cin>>x;
  cout<<"The last occurence of the element "<<x<<" is: "<<lastocc(arr, n, x);
}