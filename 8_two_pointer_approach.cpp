#include<iostream>
using namespace std;
bool findpairs(int arr[], int n, int x)
{
  int low=0, high=n-1;
  while(low<high)
  {
    if (arr[low]+arr[high]==x)
    return true;
    if (arr[low]+arr[high]<x)
    low++;
    else 
    high--;
  }
  return false;

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
  cout<<"Enter the sum to search: ";
  cin>>x;
  cout<<findpairs(arr, n, x);
  return 0;
}