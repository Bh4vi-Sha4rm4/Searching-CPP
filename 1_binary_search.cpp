#include<iostream>
using namespace std;
int bsearch(int arr[], int n, int x)
{
  int l=0, r=n-1;
  while(l<=r)
  {
    int mid=(l+r)/2;
    if(arr[mid]==x)
    return mid;                             //This is an iterative approach 
    else if(arr[mid]>x)
    r=mid-1;
    else
    l=mid+1;
  }
  return -1;
}

int main()
{
  int n,x;
  cin>>n>>x;
  int arr[n];
  for(int i=0; i<n; i++)
  cin>>arr[i];

  cout<<"the index of element "<<x<<" is "<<bsearch(arr,n,x);
  return 0;

}