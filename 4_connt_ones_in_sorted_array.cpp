#include<iostream>
using namespace std;
int totalones(int arr[], int n)
{
  int low=0, high=n-1;
  while(low<=high)
  {
    int mid=(low+high)/2;
    if(arr[mid]==0)
      low=mid-1;
    else
    {
      if(mid==0 || arr[mid+1]==0)
        return mid;
      else
        high=mid+1;
    }
  }
  return 0;
}

int main()
{
  int n;
  cout<<"Enter the number of array elements: ";
  cin>>n;
  int arr[n];  
  cout<<"Enter the binary array elemets: ";
  for(int i=0; i<n; i++)
  cin>>arr[i];
  int x;
  cout<<"The number of Ones' are: "<<totalones(arr, n);
}